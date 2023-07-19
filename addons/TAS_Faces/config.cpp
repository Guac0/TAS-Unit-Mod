// adds a new flashlight item with a larger/longer light, made by Guac
// has swappable modes with different ranges, plus night-only flashlights
// requires CBA for swappable modes
class CfgPatches
{
	class TAS_Faces
	{
		name = "TAS Faces Addon";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

class CfgFaces
{
    class Default //directly from game files
    {
        class Default
        {
            name = "";
            head = "";
            material = "";
            texture = "#(rgb,8,8,3)color(0.5,0.5,1,1)";
            textureHL = "#(rgb,8,8,3)color(0.5,0.5,1,1)";
            materialHL = "";
            identityTypes[] = {"Default"};
        };
        class Custom
        {
            name = "";
            head = "";
            material = "";
            texture = "#(rgb,8,8,3)color(1,1,1,1)";
            textureHL = "#(rgb,8,8,3)color(0.5,0.5,1,1)";
            materialHL = "";
            front = "#(rgb,8,8,3)color(1,1,1,1)";
            side = "#(rgb,8,8,3)color(1,1,1,1)";
            back = "#(rgb,8,8,3)color(1,1,1,1)";
            identityTypes[] = {};
        };
    };
    class Man_A3: Default
    {
        class TAS_Bernie_Face
		{
            author = "Guac";
            displayname = "Bernie Inauguration Face";
            texture = "Autismo_Seals_Unit_Mod\addons\TAS_Faces\faces\TAS_Guac_BernieFace1.paa";
            head = "DefaultHead_A3"; //the model
            identityTypes[] = {"Default"}; //changed to Default only in attempt to make AI stop spawning with it, but probably won't work since some units (especially modded) probably use default identity
            //identityTypes[] = {"Head_NATO", "Head_Euro"}; //not sure, copied from the white heads. Appears to make it a valid candidate for automatic identity setting for NATO units
            material = "A3\Characters_F\Heads\Data\m_White_01.rvmat";
            materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
            materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
            materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            disabled = false; //no idea. Appears to entirely disable face from being selected except by script. // always TRUE/1 for inherited camo faces
        };
        class TAS_Wuckles_Face: TAS_Bernie_Face
		{
            author = "Wuckles";
            displayname = "Wuckles";
            texture = "Autismo_Seals_Unit_Mod\addons\TAS_Faces\faces\TAS_Wuckles_WucklesFace1.paa";
        };
        class TAS_Colors_Face: TAS_Bernie_Face
		{
            author = "Colors";
            displayname = "Colors";
            texture = "Autismo_Seals_Unit_Mod\addons\TAS_Faces\faces\TAS_Colors_ColorsFace1.paa";
        };
        class TAS_Soyjack1_Face: TAS_Bernie_Face
		{
            author = "ElDuko";
            displayname = "Soyjack 1";
            texture = "Autismo_Seals_Unit_Mod\addons\TAS_Faces\faces\TAS_ElDuko_Soyjack1.paa";
        };
        class TAS_Soyjack2_Face: TAS_Bernie_Face
		{
            author = "ElDuko";
            displayname = "Soyjack 2";
            texture = "Autismo_Seals_Unit_Mod\addons\TAS_Faces\faces\TAS_ElDuko_Soyjack2.paa";
        };
    };
};