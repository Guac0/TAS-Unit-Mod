//here we define each flashlight and its light values
//NOTES: Balancing is messed up because your own flashlight is less bright than other players' flashlights. Also, nightlites need another buff

//some definitions for easier changing both brightlite and nightlite
//basically, the inheriting flashlight configs is broken somehow so gotta do it this way
//#define NIGHT_COLOR 1,0,0
#define NIGHT_COLOR 180, 160, 130
#define NIGHT_AMBIENT 6,9,9

//semicolons in defines is bad form but we need it for this to work as quasi-inherit
#define FLASHLIGHT_MEDIUM \
	position="flash dir"; \
	direction="flash"; \
	size=1; \
	innerAngle=35; \
	outerAngle=65; \
	coneFadeCoef=4; \
	intensity=175; \
	dayLight=1; \
	FlareSize=1; \
	flareMaxDistance=200; \
	scale[]={0}; \
	class Attenuation \
	{ \
		start = 0.1; \
		constant = 0; \
		linear = 0; \
		quadratic = 0.025; \
		hardLimitStart = 80; \
		hardLimitEnd = 110; \
	};
	
#define FLASHLIGHT_LOW \
	size=1; \
	innerAngle=65; \
	outerAngle=130; \
	coneFadeCoef=4; \
	intensity=50; \
	FlareSize=1; \
	flareMaxDistance=150; \
	scale[]={0}; \
	class Attenuation \
	{ \
		start = 0.1; \
		constant = 0; \
		linear = 0; \
		quadratic = 0.05; \
		hardLimitStart = 30; \
		hardLimitEnd = 40; \
	};

#define FLASHLIGHT_HIGH \
	size=1; \
	innerAngle=10; \
	outerAngle=25; \
	coneFadeCoef=4; \
	intensity=1250; \
	FlareSize=1; \
	flareMaxDistance=250; \
	scale[]={0}; \
	class Attenuation \
	{ \
		start = 1; \
		constant = 0; \
		linear = 0; \
		quadratic = 0.01; \
		hardLimitStart = 170; \
		hardLimitEnd = 225; \
	};

#define FLASHLIGHT_PISTOL \
	position="flash dir"; \
	direction="flash"; \
	size=1; \
	innerAngle=70; \
	outerAngle=130; \
	coneFadeCoef=2; \
	intensity=70; \
	dayLight=1; \
	FlareSize=1; \
	flareMaxDistance=150; \
	scale[]={0}; \
	class Attenuation \
	{ \
		start=0; \
		constant = 0; \
		linear = 0; \
		quadratic = 0.1; \
		hardLimitStart=30; \
		hardLimitEnd=40; \
	};

#define FLASHLIGHT_SNIPER \
	size=1; \
	innerAngle=1; \
	outerAngle=3; \
	coneFadeCoef=2; \
	intensity=500; \
	FlareSize=1; \
	flareMaxDistance=3000; \
	scale[]={0}; \
	class Attenuation \
	{ \
		start=6000; \
		constant = 0; \
		linear = 0; \
		quadratic = 1; \
		hardLimitStart=8000; \
		hardLimitEnd=10000; \
	};

//deprecated
#define FLASHLIGHT_STATIC \
	size=1; \
	innerAngle=15; \
	outerAngle=60; \
	coneFadeCoef=8; \
	intensity=10; \
	FlareSize=1.4; \
	flareMaxDistance=100; \
	scale[]={0}; \
	class Attenuation \
	{ \
		start=20; \
		constant = 0.5; \
		linear = 0.1; \
		quadratic = 0.2; \
		hardLimitStart=30; \
		hardLimitEnd=40; \
	};

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
				color[] = {180, 160, 130};
				ambient[] = {6,9,9};
				useFlare = 1;
				irLight = 0;
				onlyInNvg = 0;
				//color[]={600,750,900};
				//color[]={7000,7500,10000}; //old: 
				/*color[]={180, 160, 130};
				ambient[]={6,9,9}; //old: ambient[]={10,7.5,5};
				position="flash dir";
				direction="flash";
				size=1; //vanilla 1
				innerAngle=30; //vanilla 5
				outerAngle=60; //vanilla 100
				coneFadeCoef=4; //vanilla 8
				intensity=200; //vanilla 100
				useFlare=1; //vanilla 1
				dayLight=1; //vanilla 0
				FlareSize=1; //vanilla 1.4
				flareMaxDistance=200; //vanilla 100
				onlyInNvg=0; //vanilla 0
				scale[]={0}; //vanilla 0
				class Attenuation
				{
					MEDIUM_ATTENUATION
				};*/
				FLASHLIGHT_MEDIUM
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
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class FlashLight: Flashlight
			{
				FLASHLIGHT_LOW
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
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class FlashLight: Flashlight
			{
				//color[]={600,750,900};
				/*color[]={180, 160, 130};
				size=1;
				innerAngle=10;
				outerAngle=25;
				coneFadeCoef=4;
				intensity=2000;
				FlareSize=1;
				flareMaxDistance=250;
				scale[]={0};
				class Attenuation
				{
					HIGH_ATTENUATION
				};*/
				FLASHLIGHT_HIGH
			};
		};
	};
	class TAS_acc_brightlite_sniper: TAS_acc_brightlite_medium //player addPrimaryWeaponItem "TAS_acc_brightlite_sniper";
	{
		displayName = "BrightLite (Extreme Yield)";
		descriptionShort = "OverGUACed weapon-mounted lighting system (Extreme Yield).";
		scopeArsenal = 0;
		//MRT_SwitchItemNextClass = "TAS_acc_brightlite_low";
        //MRT_SwitchItemPrevClass = "TAS_acc_brightlite_high";
        //MRT_switchItemHintText = "Extreme Yield";
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class FlashLight: Flashlight
			{
				color[]={1,1,1};
				ambient[]={10,7.5,5};
				FLASHLIGHT_SNIPER
			};
		};
	};
	class TAS_acc_brightlite_static: TAS_acc_brightlite_medium //a unswapable brightlite with tuned settings to make it more attractive as a plain alternative to the vanilla light.
	{
		displayName = "BrightLite (Static Yield, WIP)";
		descriptionShort = "Enhanced weapon-mounted lighting system (Static Yield).";
		scopeArsenal = 0;
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class FlashLight: Flashlight
			{
				/*size=1; //vanilla 1
				innerAngle=15; //vanilla 5
				outerAngle=60; //vanilla 100
				coneFadeCoef=8; //vanilla 8
				intensity=10; //vanilla 100
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
				color[] = {180, 160, 130};
				ambient[] = {6,9,9};
				useFlare = 1;
				irLight = 0;
				onlyInNvg = 0;
				FLASHLIGHT_STATIC
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
				//color[]={1,1,1};
				//ambient[]={10,7.5,5};
				color[]={180, 160, 130};
				ambient[]={6,9,9};
				useFlare=1;
				FLASHLIGHT_PISTOL
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
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class FlashLight: Flashlight //inherit everything except color and ir light from the brightlites as nightlites are the same, just for IR
			{
				color[]={NIGHT_COLOR}; //use defines for these two so we can edit all the nightlites easily
				ambient[]={NIGHT_AMBIENT};
				irLight = 1;
				useFlare=0; //vanilla 1
				onlyInNvg=1; //vanilla 0
				FLASHLIGHT_MEDIUM
				//class Attenuation: Attenuation {}; //for some reason fails to compile if you just do "class Attenuation: Attenuation {};""
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
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class FlashLight: Flashlight
			{
				color[]={NIGHT_COLOR}; //use defines for these two so we can edit all the nightlites easily
				ambient[]={NIGHT_AMBIENT};
				irLight = 1;
				useFlare=0; //vanilla 1
				onlyInNvg=1; //vanilla 0
				FLASHLIGHT_LOW
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
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class FlashLight: Flashlight
			{
				color[]={NIGHT_COLOR}; //use defines for these two so we can edit all the nightlites easily
				ambient[]={NIGHT_AMBIENT};
				irLight = 1;
				useFlare=0; //vanilla 1
				onlyInNvg=1; //vanilla 0
				FLASHLIGHT_HIGH
				//class Attenuation: Attenuation {};
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
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class FlashLight: Flashlight
			{
				color[]={NIGHT_COLOR};
				ambient[]={NIGHT_AMBIENT};
				irLight = 1;
				FLASHLIGHT_SNIPER
			};		
		};
	};
	class TAS_acc_nightlite_static: TAS_acc_brightlite_static //a unswapable nightlite with tuned settings to make it more attractive as a plain alternative to the vanilla light.
	{
		displayName = "NightLite (Static Yield, WIP)";
		descriptionShort = "Enhanced weapon-mounted IR lighting system (Static Yield).";
		scopeArsenal = 0;
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class FlashLight: Flashlight
			{
				/*size=1; //vanilla 1
				innerAngle=15; //vanilla 5
				outerAngle=60; //vanilla 100
				coneFadeCoef=8; //vanilla 8
				intensity=100; //vanilla 100
				FlareSize=1.4; //vanilla 1.4
				//flareMaxDistance=100; //vanilla 100
				//scale[]={0}; //vanilla 0
				class Attenuation
				{
					start=20; //vanilla 0
					constant = 0.5; //vanilla 0.5
					linear = 0.1; //vanilla 0.1 
					quadratic = 0.2; //vanilla 0.2
					hardLimitStart=30; //vanilla 27
					hardLimitEnd=40; //vanilla 34
				};
				//color[]={NIGHT_COLOR};
				//ambient[]={NIGHT_AMBIENT};
				irLight = 1;
				//class Attenuation: Attenuation {};
				*/
				color[]={NIGHT_COLOR}; //use defines for these two so we can edit all the nightlites easily
				ambient[]={NIGHT_AMBIENT};
				irLight = 1;
				useFlare = 0; //vanilla 1
				onlyInNvg = 1; //vanilla 0
				FLASHLIGHT_STATIC
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
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class FlashLight: Flashlight
			{
				color[]={NIGHT_COLOR};
				ambient[]={NIGHT_AMBIENT};
				irLight = 1;
				useFlare=1;
				FLASHLIGHT_PISTOL
			};		
		};
		inertia = 0.1;
	};
};