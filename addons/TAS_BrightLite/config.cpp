//adds a new flashlight item with a larger/longer light
class CfgPatches {

	class TAS_BrightLite
	{
		name = "TAS BrightLite Addon";
		units[] = {};
		weapons[] = {"acc_brightlite","Item_acc_brightlite","arifle_TRG20_ACO_BrightLite_F"};
		requiredAddons[] = {"A3_Weapons_F"};
		version = "0.3";
		author[]= {"TAS Mod Team"};
		authorUrl = "https://steamcommunity.com/id/YT_YYG_Gaming";
	};

};

class CfgWeapons
{
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class acc_brightlite: ItemCore
	{
		author = "Guac";
		//_generalMacro = "acc_flashlight";
		scope = 2;
		displayName = "BrightLite";
		descriptionUse = "<t color='#9cf953'>Use: </t>Turn Flashlight ON/OFF";
		picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
		model = "\A3\weapons_f\acc\accv_Flashlight_F";
		descriptionShort = "Enhanced weapon-mounted lighting system.";
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
			};
		};
		inertia = 0.1;
	};
	class Item_Base_F;
	class Item_acc_brightlite: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Brightlite";
		author = "Guac";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_SideSlot";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class acc_brightlite
			{
				name = "acc_brightlite";
				count = 1;
			};
		};
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
	};
	class Tavor_base_F: Rifle_Base_F
	{
	};
	class arifle_TRG20_F: Tavor_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot /// default accessories for this slot
			{
				compatibleItems[] = {"acc_brightlite"};
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
	};
};