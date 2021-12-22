// here we define the item for each attachment so it can be carried when not on gun

class CfgVehicles
{
	class Item_Base_F;
	//******************************************************************
	//*************** LASER TEST **************************************
	//******************************************************************
	class TAS_Item_acc_pointer_IR: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Laser Test";
		author = "Guac";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_SideSlot";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class TAS_acc_pointer_IR
			{
				name = "TAS_acc_pointer_IR";
				count = 1;
			};
		};
	};
	//******************************************************************
	//*************** BRIGHTLITES **************************************
	//******************************************************************
	class TAS_Item_acc_brightlite_medium: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Brightlite (Medium Yield, Adjustable)";
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
		displayName = "Brightlite (Low Yield, Adjustable)";
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
		displayName = "Brightlite (High Yield, Adjustable)";
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
			class TAS_acc_brightlite_sniper
			{
				name = "TAS_acc_brightlite_sniper";
				count = 1;
			};
		};
	};
	class TAS_Item_acc_brightlite_static: TAS_Item_acc_brightlite_medium
	{
		displayName = "Brightlite (Static Yield)";
		class TransportItems
		{
			class TAS_acc_brightlite_static
			{
				name = "TAS_acc_brightlite_static";
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
	//******************************************************************
	//*************** NIGHTLITES **************************************
	//******************************************************************
	class TAS_Item_acc_nightlite_medium: TAS_Item_acc_brightlite_medium
	{
		displayName = "NightLite (Medium Yield, Adjustable)";
		class TransportItems
		{
			class TAS_acc_nightlite_medium
			{
				name = "TAS_acc_nightlite_medium";
				count = 1;
			};
		};
	};
	class TAS_Item_acc_nightlite_low: TAS_Item_acc_brightlite_low
	{
		displayName = "NightLite (Low Yield, Adjustable)";
		class TransportItems
		{
			class TAS_acc_nightlite_low
			{
				name = "TAS_acc_nightlite_low";
				count = 1;
			};
		};
	};
	class TAS_Item_acc_nightlite_high: TAS_Item_acc_brightlite_high
	{
		displayName = "NightLite (High Yield, Adjustable)";
		class TransportItems
		{
			class TAS_acc_nightlite_high
			{
				name = "TAS_acc_nightlite_high";
				count = 1;
			};
		};
	};
	class TAS_Item_acc_nightlite_sniper: TAS_Item_acc_brightlite_sniper
	{
		displayName = "NightLite (Extreme Yield)";
		class TransportItems
		{
			class TAS_acc_nightlite_sniper
			{
				name = "TAS_acc_nightlite_sniper";
				count = 1;
			};
		};
	};
	class TAS_Item_acc_nightlite_static: TAS_Item_acc_brightlite_static
	{
		displayName = "NightLite (Static Yield)";
		class TransportItems
		{
			class TAS_acc_nightlite_static
			{
				name = "TAS_acc_nightlite_static";
				count = 1;
			};
		};
	};
	class TAS_Item_acc_nightlite_pistol: TAS_Item_acc_brightlite_pistol
	{
		displayName = "NightLite (Pistol)";
		class TransportItems
		{
			class TAS_acc_nightlite_pistol
			{
				name = "TAS_acc_nightlite_pistol";
				count = 1;
			};
		};
	};
};