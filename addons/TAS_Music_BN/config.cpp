//adds custom music by Boris Nech, credit to him for the excellent music. Config by Guac.
class CfgPatches {
	class TAS_Music_BN
	{
		name = "TAS Music Addon — Boris Nech";
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
	//tracks[] = {MyMusic1,MyMusic2};
	//class MyMusic1 //This is arbitrary
	//{
	//	name	= "My first track";

		// filename, volume, pitch
	//	sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Insignia_Music\music\filename.ogg", db + 0, 1.0 };
	//};
	tracks[] = {
		TAS_BN_1,
		TAS_BN_2,
		TAS_BN_3,
		TAS_BN_4,
		TAS_BN_5,
		TAS_BN_6,
		TAS_BN_7,
		TAS_BN_8,
		TAS_BN_9,
		TAS_BN_10,
		TAS_BN_11,
		TAS_BN_12
	};
	//Boris Nech Music, credit to the artist
	class TAS_BN_1 //This is arbitrary
	{
		name	= "Ambush 1 — Scouting Enemy Territory";
		// filename, volume, pitch, duration, music class to show up in Zeus
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_BN\music\ambush\scoutingEnemyTerritory.ogg", db + 0, 1.0 };
		duration=96;
		musicClass = "TAS_BN_MusicClass";
	};
	class TAS_BN_2
	{
		name	= "Ambush 2 — Exoskeleton";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_BN\music\ambush\exoskeleton.ogg", db + 0, 1.0 };
		duration=220;
		musicClass = "TAS_BN_MusicClass";
	};
	class TAS_BN_3
	{
		name	= "Ambush 3 — Into Battle";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_BN\music\ambush\intoBattle.ogg", db + 0, 1.0 };
		duration=228;
		musicClass = "TAS_BN_MusicClass";
	};
	class TAS_BN_4
	{
		name	= "Ambush 4 — Skirmisher";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_BN\music\ambush\skirmisher.ogg", db + 0, 1.0 };
		duration=138;
		musicClass = "TAS_BN_MusicClass";
	};
	class TAS_BN_5
	{
		name	= "Ambush 5 — Ambush";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_BN\music\ambush\ambush.ogg", db + 0, 1.0 };
		duration=351;
		musicClass = "TAS_BN_MusicClass";
	};
	class TAS_BN_6
	{
		name	= "Ambush 6 — Taken Captive";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_BN\music\ambush\takenCaptive.ogg", db + 0, 1.0 };
		duration=215;
		musicClass = "TAS_BN_MusicClass";
	};
	class TAS_BN_7
	{
		name	= "Ambush 7 — Family Photo";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_BN\music\ambush\familyPhoto.ogg", db + 0, 1.0 };
		duration=220;
		musicClass = "TAS_BN_MusicClass";
	};
	class TAS_BN_8
	{
		name	= "Ambush 8 — Tortue Chamber";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_BN\music\ambush\tortueChamber.ogg", db + 0, 1.0 };
		duration=217;
		musicClass = "TAS_BN_MusicClass";
	};
	class TAS_BN_9
	{
		name	= "Ambush 9 — Disfigured";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_BN\music\ambush\disfigured.ogg", db + 0, 1.0 };
		duration=298;
		musicClass = "TAS_BN_MusicClass";
	};
	class TAS_BN_10
	{
		name	= "Ambush 10 — Rescue Mission";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_BN\music\ambush\rescueMission.ogg", db + 0, 1.0 };
		duration=182;
		musicClass = "TAS_BN_MusicClass";
	};
	class TAS_BN_11
	{
		name	= "Ambush 11 — Facing the Beast";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_BN\music\ambush\facingTheBeast.ogg", db + 0, 1.0 };
		duration=279;
		musicClass = "TAS_BN_MusicClass";
	};
	class TAS_BN_12
	{
		name	= "Ambush 12 — Homecoming";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_BN\music\ambush\Homecoming.ogg", db + 0, 1.0 };
		duration=79;
		musicClass = "TAS_BN_MusicClass";
	};
};

//makes music viewable in Zeus
class CfgMusicClasses
{
	class TAS_BN_MusicClass
	{
		displayName = "Boris Nech Music";
	};
};