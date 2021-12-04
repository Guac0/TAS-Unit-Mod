//adds music by AShamaluevMusic, config by Guac
//"You can FREE DOWNLOAD my music on the SoundCloud and my website."
//"You can LISTEN my music on the Spotify, Apple Music, Amazon, etc."
//"You can USE my music on the YouTube, Facebook, Instagram, TikTok, etc. Perfect for videos, films, podcasts, corporate and business videos, presentations, advertising, TV and radio, podcasts, cinematic scenes and trailers, video games, for any creative projects."
//https://www.ashamaluevmusic.com/
class CfgPatches {
	class TAS_MusicAShamaluev
	{
		name = "TAS AShamaluev Music Addon";
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
	//	sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MusicAShamaluev\music\filename.ogg", db + 0, 1.0 };
	//};
	tracks[] = {
		TAS_AShamaluev_1,
		TAS_AShamaluev_2,
		TAS_AShamaluev_3,
		TAS_AShamaluev_4,
		TAS_AShamaluev_5,
		TAS_AShamaluev_6,
		TAS_AShamaluev_7,
		TAS_AShamaluev_8
	};
	//*********************************************
	//*************AShamaluevMusic*****************
	//*********************************************
	class TAS_AShamaluev_1
	{
		name	= "Epic Battle Trailer — AShamaluevMusic";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MusicAShamaluev\music\EpicBattleTrailer-AShamaluevMusic.ogg", db + 0, 1.0 };
		duration=326;
		musicClass = "TAS_AShamaluevMusic_MusicClass";
	};
	class TAS_AShamaluev_2
	{
		name	= "Hybrid Trailer — AShamaluevMusic";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MusicAShamaluev\music\HybridTrailer-AShamaluevMusic.ogg", db + 0, 1.0 };
		duration=163;
		musicClass = "TAS_AShamaluevMusic_MusicClass";
	};
	class TAS_AShamaluev_3
	{
		name	= "Offensive — AShamaluevMusic";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MusicAShamaluev\music\Offensive-AShamaluevMusic.ogg", db + 0, 1.0 };
		duration=189;
		musicClass = "TAS_AShamaluevMusic_MusicClass";
	};
	class TAS_AShamaluev_4
	{
		name	= "Superiority — AShamaluevMusic";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MusicAShamaluev\music\Superiority-AShamaluevMusic.ogg", db + 0, 1.0 };
		duration=197;
		musicClass = "TAS_AShamaluevMusic_MusicClass";
	};
	class TAS_AShamaluev_5
	{
		name	= "Victorious — AShamaluevMusic";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MusicAShamaluev\music\Victorious-AShamaluevMusic.ogg", db + 0, 1.0 };
		duration=166;
		musicClass = "TAS_AShamaluevMusic_MusicClass";
	};
	class TAS_AShamaluev_6
	{
		name	= "Evolution — AShamaluevMusic";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MusicAShamaluev\music\Evolution-AShamaluevMusic.ogg", db + 0, 1.0 };
		duration=187;
		musicClass = "TAS_AShamaluevMusic_MusicClass";
	};
	class TAS_AShamaluev_7
	{
		name	= "Fortress — AShamaluevMusic";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MusicAShamaluev\music\Fortress-AShamaluevMusic.ogg", db + 0, 1.0 };
		duration=174;
		musicClass = "TAS_AShamaluevMusic_MusicClass";
	};
	class TAS_AShamaluev_8
	{
		name	= "Forward — AShamaluevMusic";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MusicAShamaluev\music\Forward-AShamaluevMusic.ogg", db + 0, 1.0 };
		duration=189;
		musicClass = "TAS_AShamaluevMusic_MusicClass";
	};
};

//makes music viewable in Zeus
class CfgMusicClasses
{
	class TAS_AShamaluevMusic_MusicClass
	{
		displayName = "AShamaluevMusic Tracks";
	};
};