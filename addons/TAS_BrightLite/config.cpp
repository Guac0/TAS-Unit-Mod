// adds a new flashlight item with a larger/longer light, made by Guac
// has swappable modes with different ranges, plus night-only flashlights
// requires CBA for swappable modes
class CfgPatches
{
	class TAS_BrightLite
	{
		name = "TAS BrightLite Addon";
		units[] = {"TAS_Item_acc_brightlite_medium","TAS_Item_acc_brightlite_low","TAS_Item_acc_brightlite_high","TAS_Item_acc_brightlite_sniper","TAS_Item_acc_brightlite_static","TAS_Item_acc_brightlite_pistol","TAS_Item_acc_nightlite_medium","TAS_Item_acc_nightlite_low","TAS_Item_acc_nightlite_high","TAS_Item_acc_nightlite_sniper","TAS_Item_acc_nightlite_static","TAS_Item_acc_nightlite_pistol","TAS_Item_acc_pointer_IR"};
		weapons[] = {"TAS_acc_brightlite_medium","TAS_acc_brightlite_low","TAS_acc_brightlite_high","TAS_acc_brightlite_sniper","TAS_acc_brightlite_static","TAS_acc_brightlite_pistol","TAS_acc_nightlite_medium","TAS_acc_nightlite_low","TAS_acc_nightlite_high","TAS_acc_nightlite_sniper","TAS_acc_nightlite_static","TAS_acc_nightlite_pistol","TAS_acc_pointer_IR"}; //"arifle_TRG20_ACO_BrightLite_F"
		requiredAddons[] = {"A3_Weapons_F","cba_main"};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

//no semicolons because hashtag command
#include "cfgCompatibility.hpp" // attachment rails information
#include "cfgWeapons.hpp" // here we define each flashlight and its "flashlight" properties
#include "cfgVehicles.hpp" // here we define the item for each attachment so it can be carried when not on gun




//some alternate/reference flashlight stats
/*class acc_flashlight_pistol //BIS pistol flashlight
		{
			author = "Bohemia Interactive";
			_generalMacro = "acc_flashlight_pistol";
			scope = 2;
			displayName = "Pistol Flashlight";
			descriptionUse = "<t color='#9cf953'>Use: </t>Turn Flashlight ON/OFF";
			picture = "\a3\Weapons_F\Data\UI\gear_accv_flashlight_TLS_CA.paa";
			model = "\A3\weapons_f\acc\accv_Flashlight_TLS_F";
			descriptionShort = "Weapon mounted light.";
			class ItemInfo: InventoryFlashLightItem_Base_F
			{
				mass = 3;
				class FlashLight
				{
					color[] = {180, 160, 130};
					ambient[] = {0.9, 0.81, 0.7};
					intensity = 100;
					size = 1;
					innerAngle = 5;
					outerAngle = 100;
					coneFadeCoef = 8;
					position = "flash dir";
					direction = "flash";
					useFlare = 1;
					flareSize = 1.4;
					flareMaxDistance = 100;
					dayLight = 0;
					class Attenuation
					{
						start = 0;
						constant = 0.5;
						linear = 0.1;
						quadratic = 0.2;
						hardLimitStart = 27;
						hardLimitEnd = 34;
					};
					scale[] = {0};
				};
			};
			inertia = 0.1;
		}; */
/* dazzler
			class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[]={600,750,900};
				ambient[]={10,7.5,5};
				position="flash dir";
				direction="flash";
				size=1;
				innerAngle=25;
				outerAngle=40;
				coneFadeCoef=1; //lowered
				intensity=100;
				useFlare=1;
				dayLight=1;
				FlareSize=0.69999999;
				flareMaxDistance=250;
				onlyInNvg=0;
				scale[]={0};
				class Attenuation
				{
					start=55; //lowered 
					constant=1; //lowered
					linear=2; //lowered
					quadratic=15;
					hardLimitStart=130;
					hardLimitEnd=160;
				};
			}; */
			/* real engine flashlight
			class FlashLight
			{
				color[]={600,750,900};
				ambient[]={10,7.5,5};
				position="flash dir";
				direction="flash";
				size=1;
				innerAngle=25;
				outerAngle=40;
				coneFadeCoef=2;
				intensity=100;
				useFlare=1;
				dayLight=1;
				FlareSize=0.69999999;
				flareMaxDistance=250;
				onlyInNvg=0;
				scale[]={0};
				class Attenuation
				{
					start=15;
					constant=100;
					linear=70;
					quadratic=15;
					hardLimitStart=130;
					hardLimitEnd=160;
				};
			}; */
			/* BIS flashlight
			class FlashLight
				{
					color[] = {180, 160, 130};
					ambient[] = {0.9, 0.81, 0.7};
					intensity = 100;
					size = 1;
					innerAngle = 5;
					outerAngle = 100;
					coneFadeCoef = 8;
					position = "flash dir";
					direction = "flash";
					useFlare = 1;
					flareSize = 1.4;
					flareMaxDistance = 100;
					dayLight = 0;
					class Attenuation
					{
						start = 0;
						constant = 0.5;
						linear = 0.1;
						quadratic = 0.2;
						hardLimitStart = 27;
						hardLimitEnd = 34;
					};
					scale[] = {0};
				};*/



	/*class Rifle; //adds a preconfigured birghtlight to trg20
	class Rifle_Base_F: Rifle
	{
	};*/
	//class Tavor_base_F;
	//{
	//};
	/*class arifle_TRG20_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot /// default accessories for this slot
			{
				compatibleItems[] += {"acc_brightlite"};
			};
		};
	};
	class arifle_TRG20_ACO_BrightLite_F: arifle_TRG20_F
	{
		author = "Guac";
		//_generalMacro = "arifle_TRG20_ACO_Flash_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_brightlite";
			};
		};
	};*/
//};