//adds a new flashlight item with a larger/longer light
class CfgPatches 
{
	class TAS_BrightLite
	{
		name = "TAS BrightLite Addon";
		units[] = {};
		weapons[] = {"TAS_acc_brightlite","TAS_Item_acc_brightlite","arifle_TRG20_ACO_BrightLite_F"};
		requiredAddons[] = {"A3_Weapons_F","cba_main"};
		//version = "0.3";
		author[]= {"TAS Mod Team"};
		authorUrl = "https://steamcommunity.com/id/YT_YYG_Gaming";
	};
};

class CfgWeapons
{
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class TAS_acc_brightlite: ItemCore
	{
		author = "Guac";
		//_generalMacro = "acc_flashlight";
		scope = 2;
		displayName = "BrightLite";
		//descriptionUse = "<t color='#9cf953'>Use: </t>Turn Flashlight ON/OFF";
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
	class TAS_Item_acc_brightlite: Item_Base_F
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
			class TAS_acc_brightlite
			{
				name = "TAS_acc_brightlite";
				count = 1;
			};
		};
	};
	class SlotInfo;
	//class PointerSlot;
	class PointerSlot: SlotInfo {
		//compatibleItems[] = {"acc_flashlight", "acc_pointer_IR","TAS_acc_brightlite"};
		compatibleItems[] = {"TAS_acc_brightlite"};
		//compatibleItems[] += {"TAS_acc_brightlite"};
	};
	
	class asdg_SlotInfo; //cba compatibility
	class asdg_FrontSideRail: asdg_SlotInfo {
		class compatibleItems {
			TAS_acc_brightlite = 1;
		};
	};
	class PointerSlot_Rail: PointerSlot {
		class compatibleItems {
			TAS_acc_brightlite = 1;
		};
	};
	/*class Rifle;
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
};

/*class BettIR_Config //add after works, required addon BettIR_Core
{
    class CompatibleAttachments
    {
        class TAS_acc_brightlite //same position as vanilla flashlight, is on the right side of the weapon
		{
			offset[] = {0.05,0.28,0.06};
		};
    };
}; */