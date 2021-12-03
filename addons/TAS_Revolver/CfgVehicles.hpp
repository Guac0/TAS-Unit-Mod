class CfgVehicles
{
	//*****************************************************
	//******************MAGAZINES**************************
	//*****************************************************
	class WeaponHolder_Single_limited_item_F;
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
	};
	class TAS_Item_6Rnd_00Buck: TAS_Item_MagInheritance
	{
		displayName = "6Rnd Buckshot Ammo";
		scope = 2;
		scopeCurator = 2;
		class TransportMagazines
		{
			class TAS_6Rnd_00Buck
			{
				magazine = "TAS_6Rnd_00Buck";
				count = 1;
			};
		};
	};
	class TAS_Item_6Rnd_Slug: TAS_Item_MagInheritance
	{
		displayName = "6Rnd Slug Ammo";
		scope = 2;
		scopeCurator = 2;
		class TransportMagazines
		{
			class TAS_6Rnd_Slug
			{
				magazine = "TAS_6Rnd_Slug";
				count = 1;
			};
		};
	};
	class TAS_Item_6Rnd_FRAG: TAS_Item_MagInheritance
	{
		displayName = "6Rnd Frag Ammo";
		scope = 2;
		scopeCurator = 2;
		class TransportMagazines
		{
			class TAS_6Rnd_FRAG
			{
				magazine = "TAS_6Rnd_FRAG";
				count = 1;
			};
		};
	};
	class TAS_Item_6Rnd_doomsday_Buck: TAS_Item_MagInheritance
	{
		displayName = "6Rnd Doomsday Buckshot Ammo";
		scope = 2;
		scopeCurator = 2;
		class TransportMagazines
		{
			class TAS_6Rnd_doomsday_Buck
			{
				magazine = "TAS_6Rnd_doomsday_Buck";
				count = 1;
			};
		};
	};
	
	//*****************************************************
	//******************WEAPONS****************************
	//*****************************************************
	class Pistol_Base_F;
	class TAS_Weapon_hgun_revolver: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Revolver";
		author = "TAS Mod Team";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Pistols";
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
		{
			class TAS_hgun_revolver
			{
				weapon = "TAS_hgun_revolver";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class TAS_6Rnd_Slug
			{
				magazine = "TAS_6Rnd_Slug";
				count = 1;
			};
		};
	};
	class TAS_Weapon_hgun_revolver_Yorris_F: TAS_Weapon_hgun_revolver
	{
		displayName = "Revolver (Yorris)";
		class TransportWeapons
		{
			class TAS_hgun_revolver_Yorris_F
			{
				weapon = "TAS_hgun_revolver_Yorris_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class TAS_6Rnd_Slug
			{
				magazine = "TAS_6Rnd_Slug";
				count = 1;
			};
		};
	};
	class TAS_Weapon_hgun_revolver_brightlite_F: TAS_Weapon_hgun_revolver
	{
		displayName = "Revolver (Brightlite)";
		class TransportWeapons
		{
			class TAS_hgun_revolver_brightlite_F
			{
				weapon = "TAS_hgun_revolver_brightlite_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class TAS_6Rnd_Slug
			{
				magazine = "TAS_6Rnd_Slug";
				count = 1;
			};
		};
	};
	class TAS_Weapon_hgun_revolver_suppressor_F: TAS_Weapon_hgun_revolver
	{
		displayName = "Revolver (Suppressor)";
		class TransportWeapons
		{
			class TAS_hgun_revolver_suppressor_F
			{
				weapon = "TAS_hgun_revolver_suppressor_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class TAS_6Rnd_Slug
			{
				magazine = "TAS_6Rnd_Slug";
				count = 1;
			};
		};
	};
	class TAS_Weapon_hgun_revolver_y_b_s_F: TAS_Weapon_hgun_revolver
	{
		displayName = "Revolver (Yorris/Brightlite/Suppressor)";
		class TransportWeapons
		{
			class TAS_hgun_revolver_y_b_s_F
			{
				weapon = "TAS_hgun_revolver_y_b_s_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class TAS_6Rnd_Slug
			{
				magazine = "TAS_6Rnd_Slug";
				count = 1;
			};
		};
	};
};