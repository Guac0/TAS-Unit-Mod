//adds retextured headgear contributed by community members, various developers (Primarily Hoxxi on config, various other than that)
class CfgPatches
{
	class TAS_Headgear
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
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
		picture = "A3\Weapons_F\Data\placeholder_co.paa";
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Headgear\Textures\TAS_Tolly_CrewHelm1.paa"};
	};
	class H_HelmetIA;
	class TAS_TboneGroundHelmet: H_HelmetIA
	{ 
		author = "TBONE";
		displayName = "TBONE's Field Helmet";
		picture = "A3\Weapons_F\Data\placeholder_co.paa";
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Headgear\Textures\TBONE_ground_helmet.paa"};
	};
	class TAS_TboneMedicHelmet: H_HelmetIA
	{ 
		author = "TBONE";
		displayName = "TBONE's Medic Helmet";
		picture = "A3\Weapons_F\Data\placeholder_co.paa";
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Headgear\Textures\TBONE_Medic_Helmet.paa"};
	};
}; 