//here we define each flashlight and its light values

class CfgWeapons
{
	class InventoryFlashLightItem_Base_F;
	class acc_flashlight;
	class TAS_acc_brightlite_medium: acc_flashlight
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
				//FlareSize=0.7;
				FlareSize=1;
				flareMaxDistance=300;
				onlyInNvg=1;
				scale[]={0};
				class Attenuation
				{
					start=55; //lowered 
					constant = 0;
					linear = 0;
					quadratic = 1;
					/*constant = 0.2;
					linear = 0;
					quadratic = 0;*/
					/*
					linear = 0.075;
					quadratic = 0.15;
					*/
					/*constant=1;
					linear=1;
					quadratic=1;*/
					hardLimitStart=70; //130
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
				//FlareSize=0.5;
				FlareSize=1;
				flareMaxDistance=250;
				scale[]={0};
				class Attenuation
				{
					start=20; //lowered 
					constant = 0;
					linear = 0;
					quadratic = 1;
					/*constant = 0.2;
					linear = 0;
					quadratic = 0;*/
					/*constant=1;
					linear=1;
					quadratic=1;*/
					hardLimitStart=30; //130
					hardLimitEnd=40; //160
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
				//FlareSize=0.9;
				FlareSize=1;
				flareMaxDistance=350;
				onlyInNvg=1;
				scale[]={0};
				irLight = 0;
				class Attenuation
				{
					start=120; //lowered 
					constant = 0;
					linear = 0;
					quadratic = 1;
					/*constant = 0.2;
					linear = 0;
					quadratic = 0;*/
					/*constant=1;
					linear=1;
					quadratic=1;*/
					hardLimitStart=140; //130
					hardLimitEnd=160; //160
				};
			};
		};
	};
	class TAS_acc_brightlite_sniper: TAS_acc_brightlite_medium
	{
		displayName = "BrightLite (Extreme Yield)";
		descriptionShort = "OverGUACed weapon-mounted lighting system (Extreme yield).";
		scopeArsenal = 0;
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
				//FlareSize=5;
				FlareSize=1;
				flareMaxDistance=3000;
				scale[]={0};
				class Attenuation
				{
					start=6000; //lowered 
					constant = 0;
					linear = 0;
					quadratic = 1;
					/*constant = 0.1;
					linear = 0;
					quadratic = 0;*/
					/*constant=1;
					linear=1;
					quadratic=1;*/
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
				//FlareSize=0.5;
				FlareSize=1;
				flareMaxDistance=150;
				scale[]={0};
				class Attenuation
				{
					start=20;
					constant = 0.2;
					linear = 0;
					quadratic = 0;
					/*constant=1;
					linear=1;
					quadratic=1;*/
					hardLimitStart=30;
					hardLimitEnd=40;
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