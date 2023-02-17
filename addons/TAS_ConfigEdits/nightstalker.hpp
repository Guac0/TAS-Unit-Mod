//nightstalker
	class optic_Nightstalker;
	class InventoryOpticsItem_Base_F;
	class TAS_Nightstalker_NoThermals: optic_Nightstalker
	{
		//author = "Bohemia Interactive";

		displayName = "Nightstalker [No Thermals]";
		/*class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class NCTALKEP
				{
					visionMode[] = {"Normal", "NVG"};
					thermalMode[] = {};
				};
			};
		};*/
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 12;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_f\acc\reticle_nightstalker_F";
			class OpticsModes
			{
				class NCTALKEP
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticsZoomMin = 0.025;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					discreteDistance[] = {200};
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal", "NVG"};
					thermalMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					discreteDistanceInitIndex = 0;
				};
				class Iron: NCTALKEP
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"", ""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
		inertia = 0.2;
		ACE_ScopeHeightAboveRail = 5.54325;
		ACE_ScopeAdjust_Vertical[] = {-4, 30};
		ACE_ScopeAdjust_Horizontal[] = {-6, 6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
	};