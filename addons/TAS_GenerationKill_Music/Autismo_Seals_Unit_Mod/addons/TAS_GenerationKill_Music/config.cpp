////////////////////////////////////////////////////////////////////
//DeRap: TAS_GenerationKill_Music\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Sat Nov 12 18:41:18 2022 : 'file' last modified on Wed Dec 31 19:00:01 1969
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class TAS_GenKill_Music
	{
		name = "Generation Kill music";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"XIMCore"};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};
class CfgMusic
{
	tracks[] = {"TAS_GenKill_1","TAS_GenKill_2","TAS_GenKill_3","TAS_GenKill_4","TAS_GenKill_5","TAS_GenKill_6","TAS_GenKill_7","TAS_GenKill_8","TAS_GenKill_9","TAS_GenKill_10","TAS_GenKill_11","TAS_GenKill_12"};
	class TAS_GenKill_1
	{
		name = "Teenage Dirtbag";
		artist = "Wheatus";
		sound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_GenerationKill_Music\music\Teenage Dirtbag.ogg","db + 0",1.0};
		duration = 246;
		musicClass = "TASGenKillMusicClass";
		moods[] = {"calm"};
	};
	class TAS_GenKill_2
	{
		name = "Tainted Love";
		artist = "Soft Cell";
		sound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_GenerationKill_Music\music\Tainted Love.ogg","db + 0",1.0};
		duration = 180;
		musicClass = "TASGenKillMusicClass";
		moods[] = {"calm"};
	};
	class TAS_GenKill_3
	{
		name = "Walkin' On The Sun";
		artist = "Smash Mouth";
		sound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_GenerationKill_Music\music\Walkin' On The Sun.ogg","db + 0",1.0};
		duration = 205;
		musicClass = "TASGenKillMusicClass";
		moods[] = {"calm"};
	};
	class TAS_GenKill_4
	{
		name = "Killing In the Name";
		artist = "Rage Against The Machine";
		sound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_GenerationKill_Music\music\Killing In the Name.ogg","db + 0",1.0};
		duration = 313;
		musicClass = "TASGenKillMusicClass";
		moods[] = {"intence"};
	};
	class TAS_GenKill_5
	{
		name = "The Man Comes Around";
		artist = "Johnny Cash";
		sound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_GenerationKill_Music\music\The Man Comes Around.ogg","db + 0",1.0};
		duration = 266;
		musicClass = "TASGenKillMusicClass";
		moods[] = {"calm","dark"};
	};
	class TAS_GenKill_6
	{
		name = "Fresh Prince of Bel Air";
		artist = "Will Smith";
		sound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_GenerationKill_Music\music\Fresh Prince of Bel Air.ogg","db + 0",1.0};
		duration = 177;
		musicClass = "TASGenKillMusicClass";
		moods[] = {"calm"};
	};
	class TAS_GenKill_7
	{
		name = "Sk8er Boi";
		artist = "Avril Lavigne";
		sound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_GenerationKill_Music\music\Sk8er Boi.ogg","db + 0",1.0};
		duration = 218;
		musicClass = "TASGenKillMusicClass";
		moods[] = {"intence"};
	};
	class TAS_GenKill_8
	{
		name = "Complicated";
		artist = "Avril Lavigne";
		sound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_GenerationKill_Music\music\Complicated.ogg","db + 0",1.0};
		duration = 253;
		musicClass = "TASGenKillMusicClass";
		moods[] = {"calm"};
	};
	class TAS_GenKill_9
	{
		name = "loving you";
		artist = "minnie riperton";
		sound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_GenerationKill_Music\music\loving you.ogg","db + 0",1.0};
		duration = 199;
		musicClass = "TASGenKillMusicClass";
		moods[] = {"calm"};
	};
	class TAS_GenKill_10
	{
		name = "Can I Kick It？";
		artist = "A Tribe Called Quest";
		sound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_GenerationKill_Music\music\Can I Kick It？.ogg","db + 0",1.0};
		duration = 235;
		musicClass = "TASGenKillMusicClass";
		moods[] = {"calm"};
	};
	class TAS_GenKill_11
	{
		name = "Hot In Herre";
		artist = "Nelly";
		sound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_GenerationKill_Music\music\Hot In Herre.ogg","db + 0",1.0};
		duration = 228;
		musicClass = "TASGenKillMusicClass";
		moods[] = {"intence"};
	};
	class TAS_GenKill_12
	{
		name = "All Star";
		artist = "Smash Mouth";
		sound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_GenerationKill_Music\music\All Star.ogg","db + 0",1.0};
		duration = 200;
		musicClass = "TASGenKillMusicClass";
		moods[] = {"intence"};
	};
};
class CfgMusicClasses
{
	class TASGenKillMusicClass
	{
		displayName = "Generation Kill music";
	};
};
