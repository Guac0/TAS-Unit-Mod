//adds some plane retextures, right now only the A164. Textures by Exile, config by Guac
class CfgPatches
{
	class TAS_PlaneRetexture
	{
		requiredAddons[]=
		{
			"A3_Air_F_EPC_Plane_CAS_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"TAS_A164_Hentai",
			"TAS_A164_Kirby"
		};
		weapons[]={};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

class CfgVehicles
{
	class B_Plane_CAS_01_F; //unused
	class B_Plane_CAS_01_dynamicLoadout_F;
	class TAS_A164_Hentai: B_Plane_CAS_01_dynamicLoadout_F
	{
		author = "Guac";
		displayName = "Hentai A-164";
		scope = 2;
		scopecurator = 2;
		//faction = "Domino_Zimbabwe";
		hiddenSelections[] = {"Camo_1", "Camo_2"};
		//hiddenSelectionsTextures[] = {"A3\Air_F_EPC\Plane_CAS_01\Data\plane_cas_01_ext01_co.paa", "A3\Air_F_EPC\Plane_CAS_01\Data\plane_cas_01_ext02_co.paa"};
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_PlaneRetexture\Data\a164_hentai.paa", "A3\Air_F_EPC\Plane_CAS_01\Data\plane_cas_01_ext02_co.paa"};
	};
	class TAS_A164_Kirby: B_Plane_CAS_01_dynamicLoadout_F
	{
		author = "Guac";
		displayName = "Kirby A-164";
		scope = 2;
		scopecurator = 2;
		//faction = "Domino_Zimbabwe";
		hiddenSelections[] = {"Camo_1", "Camo_2"};
		//hiddenSelectionsTextures[] = {"A3\Air_F_EPC\Plane_CAS_01\Data\plane_cas_01_ext01_co.paa", "A3\Air_F_EPC\Plane_CAS_01\Data\plane_cas_01_ext02_co.paa"};
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_PlaneRetexture\Data\a164_kirby_ext01_CO.paa", "Autismo_Seals_Unit_Mod\addons\TAS_PlaneRetexture\Data\a164_kirby_ext02_CO.paa"};
	};
};