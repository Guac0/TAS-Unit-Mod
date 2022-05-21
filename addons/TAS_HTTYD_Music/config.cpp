//Imports HTTYD music into Arma. If you are the owner of this material, contact Guac for a swift removal.
class CfgPatches {
	class TAS_HTTYD_Music
	{
		name = "TAS How To Train Your Dragon Music";
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
		musicClass = "TASHttydMusicClass"; //Controls in what category the music shows up in Zeus. Do not touch.
	};
	*/ //stop copy at end of line 31 (line above this one)

	tracks[] = {
		TAS_HTTYD_1,
		TAS_HTTYD_2,
		TAS_HTTYD_3,
		TAS_HTTYD_4,
		TAS_HTTYD_5,
		TAS_HTTYD_6,
		TAS_HTTYD_7,
		TAS_HTTYD_8,
		TAS_HTTYD_9,
		TAS_HTTYD_10,
		TAS_HTTYD_11,
		TAS_HTTYD_12,
		TAS_HTTYD_13,
		TAS_HTTYD_14,
		TAS_HTTYD_15,
		TAS_HTTYD_16,
		TAS_HTTYD_17,
		TAS_HTTYD_18,
		TAS_HTTYD_19,
		TAS_HTTYD_20,
		TAS_HTTYD_21,
		TAS_HTTYD_22,
		TAS_HTTYD_23,
		TAS_HTTYD_24/*,
		TAS_HTTYD_25,
		TAS_HTTYD_26,
		TAS_HTTYD_27,
		TAS_HTTYD_28,
		TAS_HTTYD_29,
		TAS_HTTYD_30,*/

	};
	class TAS_HTTYD_1
	{
		name	= "This Is Berk";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\ThisIsBerk.ogg", db + 0, 1.0 };
		duration=250;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_2
	{
		name	= "Dragon Battle";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\DragonBattle.ogg", db + 0, 1.0 };
		duration=116;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_3
	{
		name	= "The Downed Dragon";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\TheDownedDragon.ogg", db + 0, 1.0 };
		duration=258;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_4
	{
		name	= "Dragon Training";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\DragonTraining.ogg", db + 0, 1.0 };
		duration=192;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_5
	{
		name	= "Wounded";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\Wounded.ogg", db + 0, 1.0 };
		duration=87;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_6
	{
		name	= "The Dragon Book";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\TheDragonBook.ogg", db + 0, 1.0 };
		duration=144;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_7
	{
		name	= "Focus, Hiccup!";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\FocusHiccup.ogg", db + 0, 1.0 };
		duration=127;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_8
	{
		name	= "Forbidden Friendship";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\ForbiddenFriendship.ogg", db + 0, 1.0 };
		duration=252;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_9
	{
		name	= "New Tail";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\NewTail.ogg", db + 0, 1.0 };
		duration=169;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_10
	{
		name	= "See You Yomorrow";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\SeeYouTomorrow.ogg", db + 0, 1.0 };
		duration=235;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_11
	{
		name	= "Test Drive";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\TestDrive.ogg", db + 0, 1.0 };
		duration=157;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_12
	{
		name	= "Not So Fireproof";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\NotSoFireproof.ogg", db + 0, 1.0 };
		duration=74;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_13
	{
		name	= "This Time For Sure";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\ThisTimeForSure.ogg", db + 0, 1.0 };
		duration=45;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_14
	{
		name	= "Astrid Goes For A Spin";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\AstridGoesForASpin.ogg", db + 0, 1.0 };
		duration=45;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_15
	{
		name	= "Romantic Flight";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\RomanticFlight.ogg", db + 0, 1.0 };
		duration=118;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_16
	{
		name	= "Dragon's Den";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\DragonsDen.ogg", db + 0, 1.0 };
		duration=150;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_17
	{
		name	= "The Cove";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\TheCove.ogg", db + 0, 1.0 };
		duration=72;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_18
	{
		name	= "The Kill Ring";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\TheKillRing.ogg", db + 0, 1.0 };
		duration=270;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_19
	{
		name	= "Ready The Ships";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\ReadyTheShips.ogg", db + 0, 1.0 };
		duration=315;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_20
	{
		name	= "Battling The Green Death";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\BattlingTheGreenDeath.ogg", db + 0, 1.0 };
		duration=380;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_21
	{
		name	= "Counter Attack";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\CounterAttack.ogg", db + 0, 1.0 };
		duration=187;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_22
	{
		name	= "Where's Hiccup?";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\WheresHiccup.ogg", db + 0, 1.0 };
		duration=165;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_23
	{
		name	= "Coming Back Around";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\ComingBackAround.ogg", db + 0, 1.0 };
		duration=172;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_24
	{
		name	= "The Vikings Have Their Tea";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\TheVikingsHaveTheirTea.ogg", db + 0, 1.0 };
		duration=125;
		musicClass = "TASHttydMusicClass";
	};
	/*class TAS_HTTYD_25
	{
		name	= "25. ";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\.ogg", db + 0, 1.0 };
		duration=172;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_26
	{
		name	= "";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\.ogg", db + 0, 1.0 };
		duration=172;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_27
	{
		name	= "";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\.ogg", db + 0, 1.0 };
		duration=172;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_28
	{
		name	= "";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\.ogg", db + 0, 1.0 };
		duration=172;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_29
	{
		name	= "";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\.ogg", db + 0, 1.0 };
		duration=172;
		musicClass = "TASHttydMusicClass";
	};
	class TAS_HTTYD_30
	{
		name	= "";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_HTTYD_Music\music\.ogg", db + 0, 1.0 };
		duration=172;
		musicClass = "TASHttydMusicClass";
	};*/
	//Paste what you copied from Lines 26-32 on the line above this one. If there is not currently an empty line, make one. After pasting, make sure it looks like the examples, and then customize according to your song's file path, name, duration, etc
	//When you are done pasting and editing your music's information, add the classname (the name immediantly after the "class" selection in your copy paste, like "TAS_Guac_1" in "class TAS_Guac_1") to the "tracks[]" section. Put a comma after every line except for last line
};

//makes music viewable in Zeus
class CfgMusicClasses
{
	class TASHttydMusicClass
	{
		displayName = "TAS How To Train Your Dragon Music";
	};
};