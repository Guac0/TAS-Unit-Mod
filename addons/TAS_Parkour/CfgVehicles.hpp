class CfgVehicles {
	//*****************************************************
	//******************MAGAZINES**************************
	//*****************************************************
	/*class WeaponHolder_Single_limited_item_F;
	class TAS_Item_MagInheritance: WeaponHolder_Single_limited_item_F
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Test Inheritance";
		author = "TAS Mod Team";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class 6Rnd_45ACP_Cylinder
			{
				magazine = "6Rnd_45ACP_Cylinder";
				count = 1;
			};
		};
	};*/ 
	class TAS_Item_MagInheritance;
	class TAS_Item_1Rnd_grappleSmall: TAS_Item_MagInheritance
	{
		displayName = "Small Grapple";
		scope = 2;
		scopeCurator = 2;
		class TransportMagazines
		{
			class TAS_1Rnd_grappleSmall
			{
				magazine = "TAS_1Rnd_grappleSmall";
				count = 1;
			};
		};
	};
	class TAS_Item_1Rnd_grappleLarge: TAS_Item_MagInheritance
	{
		displayName = "Large Grapple";
		scope = 2;
		scopeCurator = 2;
		class TransportMagazines
		{
			class TAS_1Rnd_grappleLarge
			{
				magazine = "TAS_1Rnd_grappleLarge";
				count = 1;
			};
		};
	};
};