// here we define the item for each attachment so it can be carried when not on gun

class CfgVehicles
{
	class Item_Base_F;
	class TAS_Item_acc_brightlite_medium: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Brightlite (Medium Yield)";
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
			class TAS_acc_brightlite_sniper
			{
				name = "TAS_acc_brightlite_sniper";
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