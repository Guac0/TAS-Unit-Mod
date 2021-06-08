//adds a new flashlight item with a larger/longer light, made by Guac
//now has swappable modes with different ranges
class CfgPatches 
{
	class TAS_BrightLite
	{
		name = "TAS BrightLite Addon";
		units[] = {"TAS_Item_acc_brightlite_medium","TAS_Item_acc_brightlite_low","TAS_Item_acc_brightlite_high","TAS_Item_acc_brightlite_sniper"};
		weapons[] = {"TAS_acc_brightlite_medium","TAS_acc_brightlite_low","TAS_acc_brightlite_high","TAS_acc_brightlite_sniper"}; //"arifle_TRG20_ACO_BrightLite_F"
		requiredAddons[] = {"A3_Weapons_F","cba_main"};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

//adds rail compatibility using code derived from ace laserpointer
class SlotInfo;
class PointerSlot: SlotInfo {
    //compatibleItems[] += {"TAS_acc_brightlite_medium","TAS_acc_brightlite_low","TAS_acc_brightlite_high","TAS_Item_acc_brightlite_sniper"}; //throws errors about array not being found during packing, doesn't matter because CBA joint rails works
};

class asdg_SlotInfo; //see line 2503963 in AiO 2.00 ACE for more catagories
class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
        TAS_acc_brightlite_medium = 1;
		TAS_acc_brightlite_low = 1;
		TAS_acc_brightlite_high = 1;
		TAS_acc_brightlite_sniper = 1;
    };
};

class asdg_PistolUnderRail: asdg_SlotInfo
{
	linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
	displayName = "Pointer Slot";
	iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint = "Bottom";
	class compatibleItems
	{
		TAS_acc_brightlite_pistol = 1;
	};
};

class PointerSlot_Rail: PointerSlot {
    class compatibleItems {
        TAS_acc_brightlite_medium = 1;
		TAS_acc_brightlite_low = 1;
		TAS_acc_brightlite_high = 1;
		TAS_acc_brightlite_sniper = 1;
    };
};

class CfgWeapons
{
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class TAS_acc_brightlite_medium: ItemCore
	{
		author = "Guac";
		//_generalMacro = "acc_flashlight";
		scope = 2;
		displayName = "BrightLite (Medium Yield)";
		//baseWeapon = "TAS_acc_brightlite_medium";
		//descriptionUse = "<t color='#9cf953'>Use: </t>Turn Flashlight ON/OFF";
		picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
		model = "\A3\weapons_f\acc\accv_Flashlight_F";
		descriptionShort = "Enhanced weapon-mounted lighting system.";
		MRT_SwitchItemNextClass = "TAS_acc_brightlite_high";
        MRT_SwitchItemPrevClass = "TAS_acc_brightlite_low";
        MRT_switchItemHintText = "Medium Yield";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				//color[]={600,750,900};
				color[]={1,1,1};
				ambient[]={10,7.5,5};
				position="flash dir";
				direction="flash";
				size=1;
				innerAngle=10; //lowered from 25
				outerAngle=25; //lowered from 40
				coneFadeCoef=2; //
				intensity=100;
				useFlare=1;
				dayLight=1;
				FlareSize=0.7;
				flareMaxDistance=300;
				onlyInNvg=0;
				scale[]={0};
				class Attenuation
				{
					start=65; //lowered 
					constant=1; //lowered
					linear=1; //lowered
					quadratic=1; //15
					hardLimitStart=65; //130
					hardLimitEnd=85; //160
				};
			};
			
		};
		inertia = 0.1;
	};
	class TAS_acc_brightlite_low: TAS_acc_brightlite_medium
	{
		displayName = "BrightLite (Low Yield)";
		descriptionShort = "Enhanced weapon-mounted lighting system (Low yield).";
		scopeArsenal = 0;
		//baseWeapon = "TAS_acc_brightlite_medium";
		MRT_SwitchItemNextClass = "TAS_acc_brightlite_medium";
        MRT_SwitchItemPrevClass = "TAS_acc_brightlite_high";
        MRT_switchItemHintText = "Low Yield";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				//color[]={600,750,900};
				//color[]={255,255,255};
				color[]={1,1,1};
				ambient[]={10,7.5,5};
				position="flash dir";
				direction="flash";
				size=1;
				innerAngle=25; //lowered from 25
				outerAngle=40; //lowered from 40
				coneFadeCoef=2; //
				intensity=100;
				useFlare=1;
				dayLight=1;
				FlareSize=0.5;
				flareMaxDistance=250;
				onlyInNvg=0;
				scale[]={0};
				class Attenuation
				{
					start=20; //lowered 
					constant=1; //lowered
					linear=1; //lowered
					quadratic=1; //15
					hardLimitStart=20; //130
					hardLimitEnd=30; //160
				};
			};		
		};
	};
	class TAS_acc_brightlite_high: TAS_acc_brightlite_medium
	{
		displayName = "BrightLite (High Yield)";
		descriptionShort = "Enhanced weapon-mounted lighting system (High yield).";
		scopeArsenal = 0;
		MRT_SwitchItemNextClass = "TAS_acc_brightlite_low";
		//MRT_SwitchItemNextClass = "TAS_acc_brightlite_sniper";
        MRT_SwitchItemPrevClass = "TAS_acc_brightlite_medium";
        MRT_switchItemHintText = "High Yield";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				//color[]={600,750,900};
				color[]={1,1,1};
				ambient[]={10,7.5,5};
				position="flash dir";
				direction="flash";
				size=1;
				innerAngle=4; //lowered from 25
				outerAngle=12; //lowered from 40
				coneFadeCoef=2; //
				intensity=100;
				useFlare=1;
				dayLight=1;
				FlareSize=0.9;
				flareMaxDistance=350;
				onlyInNvg=0;
				scale[]={0};
				class Attenuation
				{
					start=120; //lowered 
					constant=1; //lowered
					linear=1; //lowered
					quadratic=1; //15
					hardLimitStart=120; //130
					hardLimitEnd=150; //160
				};
			};
		};
	};
	class TAS_acc_brightlite_sniper: TAS_acc_brightlite_medium
	{
		displayName = "BrightLite (Extreme Yield)";
		descriptionShort = "Enhanced weapon-mounted lighting system (Extreme yield).";
		//scopeArsenal = 0;
		//MRT_SwitchItemNextClass = "TAS_acc_brightlite_low";
        //MRT_SwitchItemPrevClass = "TAS_acc_brightlite_high";
        //MRT_switchItemHintText = "Extreme Yield";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				//color[]={600,750,900};
				color[]={1,1,1};
				ambient[]={10,7.5,5};
				position="flash dir";
				direction="flash";
				size=1;
				innerAngle=1; //lowered from 25
				outerAngle=3; //lowered from 40
				coneFadeCoef=2; //
				intensity=500;
				useFlare=1;
				dayLight=1;
				FlareSize=5;
				flareMaxDistance=3000;
				onlyInNvg=0;
				scale[]={0};
				class Attenuation
				{
					start=8000; //lowered 
					constant=1; //lowered
					linear=1; //lowered
					quadratic=1; //15
					hardLimitStart=8000; //130
					hardLimitEnd=10000; //160
				};
			};		
		};
	};
	class acc_flashlight_pistol;
	class TAS_acc_brightlite_pistol: acc_flashlight_pistol
	{
		author = "Guac";
		displayName = "BrightLite (Pistol)";
		descriptionShort = "Enhanced pistol-mounted lighting system (Pistol).";
		//descriptionUse = "<t color='#9cf953'>Use: </t>Turn Flashlight ON/OFF";
		//picture = "\a3\Weapons_F\Data\UI\gear_accv_flashlight_TLS_CA.paa";
		//model = "\A3\weapons_f\acc\accv_Flashlight_TLS_F";
		//MRT_SwitchItemNextClass = "TAS_acc_brightlite_medium";
        //MRT_SwitchItemPrevClass = "TAS_acc_brightlite_high";
        //MRT_switchItemHintText = "Low Yield";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				//color[]={600,750,900};
				//color[]={255,255,255};
				color[]={1,1,1};
				ambient[]={10,7.5,5};
				position="flash dir";
				direction="flash";
				size=1;
				innerAngle=30;
				outerAngle=45;
				coneFadeCoef=2;
				intensity=100;
				useFlare=1;
				dayLight=1;
				FlareSize=0.5;
				flareMaxDistance=150;
				onlyInNvg=0;
				scale[]={0};
				class Attenuation
				{
					start=20;
					constant = 0.5;
					linear = 0.1;
					quadratic = 0.2;
					/*constant=1;
					linear=1;
					quadratic=1;*/
					hardLimitStart=20;
					hardLimitEnd=30;
				};
			};		
		};
		inertia = 0.1;
	};
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
};

class CfgVehicles
{
	class Item_Base_F;
	class TAS_Item_acc_brightlite_medium: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Brightlite ( Yield)";
		author = "Guac";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_SideSlot";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class TAS_acc_brightlite_medium
			{
				name = "TAS_acc_brightlite_medium";
				count = 1;
			};
		};
	};
	class TAS_Item_acc_brightlite_low: TAS_Item_acc_brightlite_medium
	{
		displayName = "Brightlite (Low Yield)";
		author = "Guac";
		class TransportItems
		{
			class TAS_acc_brightlite_low
			{
				name = "TAS_acc_brightlite_low";
				count = 1;
			};
		};
	};
	class TAS_Item_acc_brightlite_high: TAS_Item_acc_brightlite_medium
	{
		displayName = "Brightlite (High Yield)";
		class TransportItems
		{
			class TAS_acc_brightlite_high
			{
				name = "TAS_acc_brightlite_high";
				count = 1;
			};
		};
	};
	class TAS_Item_acc_brightlite_sniper: TAS_Item_acc_brightlite_medium
	{
		displayName = "Brightlite (Extreme Yield)";
		class TransportItems
		{
			class TAS_acc_brightlite_extreme
			{
				name = "TAS_acc_brightlite_extreme";
				count = 1;
			};
		};
	};
	class TAS_Item_acc_brightlite_pistol: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Brightlite (Pistol)";
		author = "Guac";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_SideSlot";
		vehicleClass = "WeaponAccessories";
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class TAS_acc_brightlite_pistol
			{
				name = "TAS_acc_brightlite_pistol";
				count = 1;
			};
		};
	};
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