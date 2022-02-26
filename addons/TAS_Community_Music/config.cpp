//A template for TAS community members to add music to the unit mod. See readme.md for instructions.
class CfgPatches {
	class TAS_Community_Music
	{
		name = "TAS Community Music Addon";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

class CfgMusic
{
	//********************************************************************************************************************************************************************************************
    //*****            Music              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
	/*
	tracks[] = {
		MyMusic1,
		MyMusic2
	};
	*/
	/* //to add new music, copy the following
	class TAS_YourName_MusicNumber //This can be whatever, but please follow the given format
	{
		name	= "My first track";
		duration=100; //Replace "100" with how long your music is, in seconds. This number will show during music selection.
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Community_Music\music\filename.ogg", db + 0, 1.0 }; //filename (from root of entire mod), volume, pitch. Leave volume and pitch at defaults.
		musicClass = "TASCommunityMusicClass"; //Controls in what category the music shows up in Zeus. Do not touch.
	};
	*/ //stop copy at end of line 31 (line above this one)

	tracks[] = {
		TAS_Guac_1,
		TAS_Guac_2 //every music track as a comma after it except for the last music track in the list
	};
	class TAS_Guac_1
	{
		name	= "Crazy Frog (Medieval Style) — by AxelF";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Community_Music\music\Guac\CrazyFrog-AxelF(MedievalStyle).ogg", db + 0, 1.0 };
		duration=172;
		musicClass = "TASCommunityMusicClass";
	};
	class TAS_Guac_2
	{
		name	= "Home Depot Theme Orchestral Remix";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Community_Music\music\Guac\HomeDepotThemeOrchestralRemix.ogg", db + 0, 1.0 };
		duration=148;
		musicClass = "TASCommunityMusicClass";
	};
	
	//Paste what you copied from Lines 26-32 on the line above this one. If there is not currently an empty line, make one. After pasting, make sure it looks like the examples, and then customize according to your song's file path, name, duration, etc
	//When you are done pasting and editing your music's information, add the classname (the name immediantly after the "class" selection in your copy paste, like "TAS_Guac_1" in "class TAS_Guac_1") to the "tracks[]" section. Put a comma after every line except for last line
};

//makes music viewable in Zeus
class CfgMusicClasses
{
	class TASCommunityMusicClass
	{
		displayName = "TAS Community-added Music";
	};
};