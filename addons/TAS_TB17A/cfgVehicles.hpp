class CfgVehicles
{
	//*****************************************************
	//******************MAGAZINES**************************
	//*****************************************************
	class WeaponHolder_Single_limited_item_F;
	class TAS_Item_TB17A_17rnd_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "TB17A 17rnd Mag";
		author = "TAS Mod Team";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class TAS_TB17A_17rnd_Mag
			{
				magazine = "TAS_TB17A_17rnd_Mag";
				count = 1;
			};
		};
	};
	class TAS_TB17A_17rnd_Tracer_Mag: TAS_Item_TB17A_17rnd_Mag
	{
		displayName = "TB17A 17rnd Tracer Mag";
		class TransportMagazines
		{
			class TAS_TB17A_17rnd_Tracer_Mag
			{
				magazine = "TAS_TB17A_17rnd_Tracer_Mag";
				count = 1;
			};
		};
	};
	class TAS_TB17A_61rnd_Tracer_Mag: TAS_Item_TB17A_17rnd_Mag
	{
		displayName = "TB17A 61rnd Tracer Mag";
		class TransportMagazines
		{
			class TAS_TB17A_61rnd_Tracer_Mag
			{
				magazine = "TAS_TB17A_61rnd_Tracer_Mag";
				count = 1;
			};
		};
	};

	//*****************************************************
	//******************WEAPONS****************************
	//*****************************************************
	class Pistol_Base_F;
	class TAS_Weapon_TB17A: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "TB17A/C";
		author = "TBONE and Guac";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Pistols";
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
		{
			class TAS_TB17A
			{
				weapon = "TAS_TB17A";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class TAS_TB17A_17rnd_Mag
			{
				magazine = "TAS_TB17A_17rnd_Mag";
				count = 1;
			};
		};
	};
};