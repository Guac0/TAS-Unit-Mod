////////////////////////////////////////////////////////////////////
//DeRap: vurtual_seat\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Mon Apr 17 21:15:22 2023 : 'file' last modified on Wed Dec 31 19:00:01 1969
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class vurtual_seat
	{
		units[] = {"vurtual_seat","vurtual_stretcher","vurtual_stretcher_bag","vurtual_foxhole"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Static_F"};
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		vurtual_stretcher = "vurtual_stretcher";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class vurtual_stretcher: Crew
		{
			file = "a3\anims_f\data\anim\sdr\inj\ainjppnemstpsnonwnondnon.rtm";
			interpolateTo[] = {"Unconscious",0.02};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
	};
};
class CfgFunctions
{
	class vurtual_seat
	{
		tag = "vurtual_seat";
		class boxloaderFunctions
		{
			file = "\vurtual_seat\fnc";
			class stretcher{};
			class foxhole{};
			class carry_litter{};
		};
	};
};
class cfgVehicles
{
	class Tank_F;
	class vurtual_seat: Tank_F
	{
		rightDustEffects[] = {};
		rightDustEffect = "";
		leftDustEffects[] = {};
		leftDustEffect = "";
		class Exhausts {};
		class DustEffects {};
		explosionEffect = "";
		fuelExplosionPower = 0;
		editorForceEmpty = 1;
		editorSubcategory = "edSubcat_Storage";
		crew = "C_man_1";
		icon = "iconObject_1x1";
		hasDriver = 0;
		scope = 2;
		side = 3;
		faction = "CIV_F";
		accuracy = 0.001;
		camouflage = 10;
		armor = 20;
		displayName = "Car Seat";
		Model = "\vurtual_seat\vurtual_seat.p3d";
		simulation = "tankX";
		crewVulnerable = 1;
		explosionShielding = 0;
		irTarget = 0;
		allowTabLock = 0;
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		cargoAction[] = {"passenger_low01"};
		tf_isolatedAmount = 0;
		numberPhysicalWheels = 0;
		hideProxyInCombat = 0;
		class Damage
		{
			tex[] = {};
			mat[] = {"vurtual_seat\Data\seat.rvmat","vurtual_seat\Data\seat.rvmat","vurtual_seat\Data\seat_destruct.rvmat"};
		};
		class animationSources
		{
			class seat_hide
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.1;
				displayName = "Hide Seat";
				forceAnimatePhase = 1;
				forceAnimate[] = {"legs_hide",1};
			};
		};
		maximumLoad = 0;
		transportMaxBackpacks = 0;
		transportMaxMagazines = 64;
		class TransportItems;
		class CargoTurret;
		class Turrets
		{
			class MainTurret: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerInAction = "passenger_inside_2";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Armchair Warrior";
				gunnerCompartments = "Compartment1";
				proxyIndex = 1;
				isPersonTurret = 1;
				forceHideGunner = 1;
				maxElev = 75;
				minElev = -75;
				maxTurn = 95;
				minTurn = -95;
				stabilizedInAxes = 3;
				primaryGunner = 1;
				dontCreateAI = 0;
				ejectDeadGunner = 0;
			};
		};
		transportSoldier = 0;
		ace_cargo_canLoad = 0;
		ace_Cargo_hasCargo = 0;
		ace_dragging_canDrag = 0;
		ace_dragging_canCarry = 0;
		ace_cookoff_probability = 0;
		destrType = "destructDefault";
		fuelCapacity = 0;
		nameSound = "veh_static_s";
		vehicleClass = "static";
		unitInfoType = "RscUnitInfoStatic";
		crewExplosionProtection = 0;
		class DestructionEffects{};
	};
	class weapon_bag_base;
	class vurtual_stretcher_bag: weapon_bag_base
	{
		class assembleInfo
		{
			displayName = "Stretcher";
			assembleTo = "vurtual_stretcher";
			base = "";
			primary = 1;
			dissasembleTo[] = {};
		};
		author = "vurtual";
		scope = 2;
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_DismantledWeapons";
		displayName = "Stretcher (Packed)";
		mass = 60;
	};
	class vurtual_foxhole: vurtual_seat
	{
		displayName = "Foxhole";
		model = "\vurtual_seat\vurtual_foxhole.p3d";
		cargoAction[] = {"passenger_flatground_4_vehicle_passenger_stand_1"};
		class AnimationSources: animationSources
		{
			class GunnerTurnOut
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
		};
		maximumLoad = 100;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerName = "Gunner";
				minElev = -10;
				maxElev = 75;
				minTurn = -100;
				maxTurn = 100;
				minOutElev = -10;
				maxOutElev = 75;
				minOutTurn = -100;
				maxOutTurn = 100;
				isPersonTurret = 1;
				inGunnerMayFire = 1;
				outGunnerMayFire = 1;
				gunnerForceOptics = 0;
				allowLauncherIn = 1;
				allowLauncherOut = 1;
				showAsCargo = 0;
			};
		};
		class EventHandlers
		{
			init = "_this call vurtual_seat_fnc_foxhole";
		};
	};
	class vurtual_stretcher: vurtual_seat
	{
		ace_dragging_canDrag = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_dragPosition[] = {0,1.7,0};
		ace_dragging_carryPosition[] = {0,1.7,0};
		ace_dragging_dragDirection = 0;
		ace_Carry_carryDirection = 0;
		transportSoldier = 1;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class Turrets{};
		class AnimationSources{};
		displayName = "Stretcher";
		Model = "\vurtual_seat\vurtual_stretcher.p3d";
		cargoAction[] = {"vurtual_stretcher"};
		hideWeaponsCargo = "true";
		ejectDeadCargo = 0;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 5;
				canBeTransported = 1;
				dimensions[] = {"VTV_Cargo_Base","VTV_Cargo_Corner"};
			};
		};
		class EventHandlers
		{
			init = "_this call vurtual_seat_fnc_stretcher";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"vurtual_seat\Data\stretcher.rvmat","vurtual_seat\Data\stretcher.rvmat","vurtual_seat\Data\seat_destruct.rvmat"};
		};
	};
};
class cfgMods
{
	author = "vurtual";
	timepacked = "1535211253";
};
