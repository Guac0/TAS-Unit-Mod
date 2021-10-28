//here we define each flashlight and its light values

//some definitions for easier changing both brightlite and nightlite
//#define

class CfgWeapons
{
	class InventoryFlashLightItem_Base_F;
	class acc_flashlight;
	//******************************************************************
	//*************** BRIGHTLITES **************************************
	//******************************************************************
	class TAS_acc_brightlite_medium: acc_flashlight
	{
		author = "Guac";
		//_generalMacro = "acc_flashlight";
		scope = 2;
		displayName = "BrightLite (Medium Yield, Adjustable)";
		//baseWeapon = "TAS_acc_brightlite_medium";
		//descriptionUse = "<t color='#9cf953'>Use: </t>Turn Flashlight ON/OFF";
		picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
		model = "\A3\weapons_f\acc\accv_Flashlight_F";
		descriptionShort = "Enhanced weapon-mounted lighting system (Medium Yield, Adjustable).";
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
		displayName = "BrightLite (Low Yield, Adjustable)";
		descriptionShort = "Enhanced weapon-mounted lighting system (Low Yield, Adjustable).";
		scopeArsenal = 0;
		MRT_SwitchItemNextClass = "TAS_acc_brightlite_medium";
        MRT_SwitchItemPrevClass = "TAS_acc_brightlite_high";
        MRT_switchItemHintText = "Low Yield";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[]={1,1,1};
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
				FlareSize=1;
				flareMaxDistance=250;
				scale[]={0};
				class Attenuation
				{
					start=20;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart=30;
					hardLimitEnd=40;
				};
			};		
		};
	};
	class TAS_acc_brightlite_high: TAS_acc_brightlite_medium
	{
		displayName = "BrightLite (High Yield, Adjustable)";
		descriptionShort = "Enhanced weapon-mounted lighting system (High Yield, Adjustable).";
		scopeArsenal = 0;
		MRT_SwitchItemNextClass = "TAS_acc_brightlite_low";
        MRT_SwitchItemPrevClass = "TAS_acc_brightlite_medium";
        MRT_switchItemHintText = "High Yield";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[]={1,1,1};
				ambient[]={10,7.5,5};
				position="flash dir";
				direction="flash";
				size=1;
				innerAngle=4;
				outerAngle=12;
				coneFadeCoef=2;
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
					start=120;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart=140;
					hardLimitEnd=160;
				};
			};
		};
	};
	class TAS_acc_brightlite_sniper: TAS_acc_brightlite_medium
	{
		displayName = "BrightLite (Extreme Yield)";
		descriptionShort = "OverGUACed weapon-mounted lighting system (Extreme Yield).";
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
	class TAS_acc_brightlite_static: TAS_acc_brightlite_medium //a unswapable brightlite with tuned settings to make it more attractive as a plain alternative to the vanilla light.
	{
		displayName = "BrightLite (Static Yield)";
		descriptionShort = "Enhanced weapon-mounted lighting system (Static Yield).";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				//color[]={600,750,900};
				//color[]={255,255,255};
				//color[]={1,1,1};
				//ambient[]={10,7.5,5};
				//position="flash dir";
				//direction="flash";
				/*size=1; //vanilla 1
				innerAngle=15; //vanilla 5
				outerAngle=60; //vanilla 100
				coneFadeCoef=8; //vanilla 8
				intensity=100; //vanilla 100
				useFlare=1; //vanilla 1
				dayLight=1; //vanilla 0
				FlareSize=1.4; //vanilla 1.4
				flareMaxDistance=100; //vanilla 100
				scale[]={0}; //vanilla 0
				class Attenuation
				{
					start=20; //vanilla 0
					constant = 0.5; //vanilla 0.5
					linear = 0.1; //vanilla 0.1 
					quadratic = 0.2; //vanilla 0.2
					hardLimitStart=30; //vanilla 27
					hardLimitEnd=40; //vanilla 34
				};*/
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
        //MRT_switchItemHintText = "Low Yield, Adjustable";
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
	//******************************************************************
	//*************** NIGHTLITES **************************************
	//******************************************************************
	class TAS_acc_nightlite_medium: TAS_acc_brightlite_medium
	{
		displayName = "NightLite (Medium Yield, Adjustable)";
		descriptionShort = "Enhanced weapon-mounted IR lighting system.";
		MRT_SwitchItemNextClass = "TAS_acc_nightlite_high";
        MRT_SwitchItemPrevClass = "TAS_acc_nightlite_low";
        MRT_switchItemHintText = "Medium Yield IR Light";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[]={1,1,1};
				ambient[]={10,7.5,5};
				//irLight = 1;
			};
		};
		inertia = 0.1;
	};
	class TAS_acc_nightlite_low: TAS_acc_brightlite_low
	{
		displayName = "NightLite (Low Yield, Adjustable)";
		descriptionShort = "Enhanced weapon-mounted IR lighting system (Low Yield, Adjustable).";
		scopeArsenal = 0;
		MRT_SwitchItemNextClass = "TAS_acc_nightlite_medium";
        MRT_SwitchItemPrevClass = "TAS_acc_nightlite_high";
        MRT_switchItemHintText = "Low Yield IR Light";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[]={1,1,1};
				ambient[]={10,7.5,5};
				irLight = 1;
			};		
		};
	};
	class TAS_acc_nightlite_high: TAS_acc_brightlite_high
	{
		displayName = "NightLite (High Yield, Adjustable)";
		descriptionShort = "Enhanced weapon-mounted IR lighting system (High Yield, Adjustable).";
		scopeArsenal = 0;
		MRT_SwitchItemNextClass = "TAS_acc_nightlite_low";
        MRT_SwitchItemPrevClass = "TAS_acc_nightlite_medium";
        MRT_switchItemHintText = "High Yield IR Light";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[]={1,1,1};
				ambient[]={10,7.5,5};
				irLight = 1;
			};
		};
	};
	class TAS_acc_nightlite_sniper: TAS_acc_brightlite_sniper
	{
		displayName = "NightLite (Extreme Yield)";
		descriptionShort = "OverGUACed weapon-mounted IR lighting system (Extreme Yield).";
		scopeArsenal = 0;
		//MRT_SwitchItemNextClass = "TAS_acc_nightlite_low";
        //MRT_SwitchItemPrevClass = "TAS_acc_nightlite_high";
        //MRT_switchItemHintText = "Extreme Yield IR Light";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[]={1,1,1};
				ambient[]={10,7.5,5};
				irLight = 1;
			};		
		};
	};
	class TAS_acc_nightlite_static: TAS_acc_brightlite_static //a unswapable nightlite with tuned settings to make it more attractive as a plain alternative to the vanilla light.
	{
		displayName = "NightLite (Static Yield)";
		descriptionShort = "Enhanced weapon-mounted IR lighting system (Static Yield).";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[]={1,1,1};
				ambient[]={10,7.5,5};
				irLight = 1;
			};		
		};
	};
	class TAS_acc_nightlite_pistol: TAS_acc_brightlite_pistol
	{
		author = "Guac";
		displayName = "NightLite (Pistol)";
		descriptionShort = "Enhanced pistol-mounted IR lighting system (Pistol).";
		//descriptionUse = "<t color='#9cf953'>Use: </t>Turn Flashlight ON/OFF";
		//picture = "\a3\Weapons_F\Data\UI\gear_accv_flashlight_TLS_CA.paa";
		//model = "\A3\weapons_f\acc\accv_Flashlight_TLS_F";
		//MRT_SwitchItemNextClass = "TAS_acc_nightlite_medium";
        //MRT_SwitchItemPrevClass = "TAS_acc_nightlite_high";
        //MRT_switchItemHintText = "Low Yield, Adjustable, Adjustable";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[]={1,1,1};
				ambient[]={10,7.5,5};
				irLight = 1;
			};		
		};
		inertia = 0.1;
	};
};