//adds retextured headgear contributed by community members, various developers (Primarily Hoxxi on config, various other than that)
class CfgPatches
{
	class TAS_Headgear
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		}; //A3_Weapons_F_Ammoboxes
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

class cfgWeapons
{
	class H_CrewHelmetHeli_B;
	class TAS_TollyHeliHelmet: H_CrewHelmetHeli_B
	{ 
		author = "Tolly";
		displayName = "Tolly's Flight Helmet";
		//picture = "A3\Weapons_F\Data\placeholder_co.paa"; //doesnt work as an inventory picture
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Headgear\Textures\TAS_Tolly_CrewHelm1.paa"};
	};
	class TAS_TBONE_CrewHelmet: H_CrewHelmetHeli_B
	{ 
		author = "TBONE";
		displayName = "TBONE's Flight Helmet";
		//picture = "A3\Weapons_F\Data\placeholder_co.paa"; //doesnt work as an inventory picture
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Headgear\Textures\TAS_Kommik_CrewHelm1.paa"};
	};
	class H_HelmetIA;
	class TAS_TboneGroundHelmet: H_HelmetIA
	{ 
		author = "TBONE";
		displayName = "TBONE's Field Helmet";
		//picture = "A3\Weapons_F\Data\placeholder_co.paa"; //doesnt work as an inventory picture
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Headgear\Textures\TBONE_ground_helmet.paa"};
	};
	class TAS_TboneMedicHelmet: H_HelmetIA
	{ 
		author = "TBONE";
		displayName = "TBONE's Medic Helmet (Texture Currently Broken)";
		//picture = "A3\Weapons_F\Data\placeholder_co.paa"; //doesnt work as an inventory picture
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Headgear\Textures\TBONE_Medic_Helmet.paa"};
	};
};

class cfgVehicles
{
	class WeaponHolder;
	class Headgear_Base_F;
	class TAS_Headgear_TollyHeliHelmet: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Tolly's Flight Helmet";
		author = "TAS Mod Team";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class TAS_TollyHeliHelmet
			{
				name = "TAS_TollyHeliHelmet";
				count = 1;
			};
		};
	};
	class TAS_Headgear_Kommik_CrewHelmet: TAS_Headgear_TollyHeliHelmet
	{
		displayName = "Kommik's Flight Helmet";
		class TransportItems
		{
			class TAS_Kommik_CrewHelmet
			{
				name = "TAS_Kommik_CrewHelmet";
				count = 1;
			};
		};
	};
	class TAS_Headgear_TboneGroundHelmet: TAS_Headgear_TollyHeliHelmet
	{
		displayName = "TBONE's Field Helmet";
		class TransportItems
		{
			class TAS_TboneGroundHelmet
			{
				name = "TAS_TboneGroundHelmet";
				count = 1;
			};
		};
	};
	class TAS_Headgear_TboneMedicHelmet: TAS_Headgear_TollyHeliHelmet
	{
		displayName = "TBONE's Medic Helmet (Texture Currently Broken)";
		class TransportItems
		{
			class TAS_TboneMedicHelmet
			{
				name = "TAS_TboneMedicHelmet";
				count = 1;
			};
		};
	};
	/*class Headgear_Base_F: WeaponHolder
	{
		author = "Bohemia Interactive";
		_generalMacro = "Headgear_Base_F";
		model = "\A3\Weapons_F\DummyHeadgear.p3d";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
	};
	class Headgear_H_HelmetB_grass: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Combat Helmet (Grass)";
		author = "Bohemia Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_grass
			{
				name = "H_HelmetB_grass";
				count = 1;
			};
		};
	};*/
};