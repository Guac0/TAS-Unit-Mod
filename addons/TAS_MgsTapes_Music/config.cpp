//Imports MGS5 music into Arma. If you are the owner of this material, contact Guac for a swift removal.
class CfgPatches {
	class TAS_MgsTapes_Music
	{
		name = "Metal Gear Solid 5: Phantom Pain 80’s Cassette Tapes";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"XIMCore"};
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
		TAS_MGSV_1,
		TAS_MGSV_2,
		TAS_MGSV_3,
		TAS_MGSV_4,
		TAS_MGSV_5,
		TAS_MGSV_6,
		TAS_MGSV_7,
		TAS_MGSV_8,
		TAS_MGSV_9,
		TAS_MGSV_10,
		TAS_MGSV_11,
		TAS_MGSV_12,
		TAS_MGSV_13,
		TAS_MGSV_14,
	};
	class TAS_MGSV_1	
	{
	    name	= "You Spin Me Round";
		artist  = "Dead Or Alive";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\You Spin Me Round.ogg", db + 0, 1.0 };
		duration=196;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "intense"
		};
	};
	class TAS_MGSV_2	
	{
	    name	= "Dancing With Tears In My Eyes";
		artist  = "Ultravox";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\Dancing With Tears In My Eyes.ogg", db + 0, 1.0 };
		duration=263;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "calm"
		};
	};
	class TAS_MGSV_3	
	{
	    name	= "The Final Countdown";
		artist  = "Europe";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\The Final Countdown.ogg", db + 0, 1.0 };
		duration=311;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "intence"
		};
	};
	class TAS_MGSV_4	
	{
	    name	= "Take on Me";
		artist  = "a-ha";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\Take on Me.ogg", db + 0, 1.0 };
		duration=244;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "calm"
		};
	};
	class TAS_MGSV_5	
	{
	    name	= "True";
		artist  = "Spandau Ballet";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\True.ogg", db + 0, 1.0 };
		duration=317;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "calm"
		};
	};
	class TAS_MGSV_6	
	{
	    name	= "She Blinded Me With Science";
		artist  = "Thomas Dolby";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\She Blinded Me With Science.ogg", db + 0, 1.0 };
		duration=221;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "calm"
		};
	};
	class TAS_MGSV_7	
	{
	    name	= "Rebel Yell";
		artist  = "Billy Idol";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\Rebel Yell", db + 0, 1.0 };
		duration=286;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "intence"
		};
	};
	class TAS_MGSV_8	
	{
	    name	= "Quiet Life";
		artist  = "Japan";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\Quiet Life", db + 0, 1.0 };
		duration=291;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "calm"
		};
	};
	class TAS_MGSV_9	
	{
	    name	= "Only Time Will Tell";
		artist  = "Asia";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\Only Time Will Tell", db + 0, 1.0 };
		duration=284;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "calm"
		};
	};
	class TAS_MGSV_10	
	{
	    name	= "The Man Who Sold The World";
		artist  = "Midge Ure";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\The Man Who Sold The World", db + 0, 1.0 };
		duration=343;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "calm"
		};
	};
	class TAS_MGSV_11	
	{
	    name	= "Maneater";
		artist  = "Daryl Hall & John Oates";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\Maneater", db + 0, 1.0 };
		duration=271;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "calm"
		};
	};
	class TAS_MGSV_12	
	{
	    name	= "Kids In America";
		artist  = "Kim Wilde";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\Kids In America", db + 0, 1.0 };
		duration=206;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "intence"
		};
	};
	class TAS_MGSV_13	
	{
	    name	= "Love Will Tear Us Apart";
		artist  = "Joy Division";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\Love Will Tear Us Apart", db + 0, 1.0 };
		duration=204;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "calm"
		};
	};
	class TAS_MGSV_14	
	{
	    name	= "Gloria";
		artist  = "Laura Branigan";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_MgsTapes_Music\music\Gloria", db + 0, 1.0 };
		duration=295;
		musicClass = "TASMgsvMusicClass";
        moods[] = 
        {
            "calm"
		};
	};
	//When you are done pasting and editing your music's information, add the classname (the name immediantly after the "class" selection in your copy paste, like "TAS_Guac_1" in "class TAS_Guac_1") to the "tracks[]" section. Put a comma after every line except for last line
};

//makes music viewable in Zeus
class CfgMusicClasses
{
	class TASMgsvMusicClass
	{
		displayName = "Metal Gear Solid 5: Phantom Pain 80’s Cassette Tapes";
	};
};