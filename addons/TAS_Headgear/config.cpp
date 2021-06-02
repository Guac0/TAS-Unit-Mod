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
		
	};
};

class cfgWeapons
{
	class H_CrewHelmetHeli_B;
	class TAS_TestHelmet: H_CrewHelmetHeli_B
	{ 
		author = "Tolly";
		displayName = "Tolly's Helmet";
		picture = "A3\Weapons_F\Data\placeholder_co.paa";
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Headgear\Textures\TAS_Tolly_CrewHelm1.paa"};
	};
}; 