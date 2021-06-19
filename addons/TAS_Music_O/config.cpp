//adds custom music from SCP: Overlord to Arma (No copyright infringement intended), primary config by Guac
class CfgPatches {
	class TAS_Music_O
	{
		name = "TAS Music Addon — Overlord Section";
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
	//	sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\filename.ogg", db + 0, 1.0 };
	//};
	tracks[] = {
		TAS_O1,
		TAS_O2,
		TAS_O3,
		TAS_O4,
		TAS_O5,
		TAS_O6,
		TAS_O7,
		TAS_O8,
		TAS_O9,
		TAS_O10,
		TAS_O11,
		TAS_O12,
		TAS_O13,
		TAS_O14,
		TAS_O15,
		TAS_OE1,
		TAS_OE2,
		TAS_OE3,
		TAS_OE4,
		TAS_OE5,
		TAS_OE6,
		TAS_OE7,
		TAS_OE8,
		TAS_OE9,
		TAS_OE10,
		TAS_OE11,
		TAS_OE12,
		TAS_OE13,
	};
	//Overlord OST, see https://www.youtube.com/watch?v=u6SPFiBt_h4&t=0s , All Rights Reserved
	class TAS_O1
	{
		name	= "(O1) Scepter — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O1_Scepter.ogg", db + 0, 1.0 };
		duration=172;
		musicClass = "TASOverlordClass";
	};
	class TAS_O2
	{
		name	= "(O2) Woods — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O2_Woods.ogg", db + 0, 1.0 };
		duration=148;
		musicClass = "TASOverlordClass";
	};
	class TAS_O3
	{
		name	= "(O3) Damnation — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O3_Damnation.ogg", db + 0, 1.0 };
		duration=288;
		musicClass = "TASOverlordClass";
	};
	class TAS_O4
	{
		name	= "(O4) Clean Up — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O4_CleanUp.ogg", db + 0, 1.0 };
		duration=80;
		musicClass = "TASOverlordClass";
	};
	class TAS_O5
	{
		name	= "(O5) New Transcendentalists — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O5_NewTranscendentalists.ogg", db + 0, 1.0 };
		duration=70;
		musicClass = "TASOverlordClass";
	};
	class TAS_O6
	{
		name	= "(O6) Play Me — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O6_PlayMe.ogg", db + 0, 1.0 };
		duration=71;
		musicClass = "TASOverlordClass";
	};
	class TAS_O7
	{
		name	= "(O7) Camera — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O7_Camera.ogg", db + 0, 1.0 };
		duration=45;
		musicClass = "TASOverlordClass";
	};
	class TAS_O8
	{
		name	= "(O8) Symbols — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O8_Symbols.ogg", db + 0, 1.0 };
		duration=92;
		musicClass = "TASOverlordClass";
	};
	class TAS_O9
	{
		name	= "(O9) Tic — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O9_Tic.ogg", db + 0, 1.0 };
		duration=98;
		musicClass = "TASOverlordClass";
	};
	class TAS_O10
	{
		name	= "(O10) Post Mortem — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O10_PostMortem.ogg", db + 0, 1.0 };
		duration=146;
		musicClass = "TASOverlordClass";
	};
	class TAS_O11
	{
		name	= "(O11) Treeline — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O11_Treeline.ogg", db + 0, 1.0 };
		duration=29;
		musicClass = "TASOverlordClass";
	};
	class TAS_O12
	{
		name	= "(O12) 1234 — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O12_1234.ogg", db + 0, 1.0 };
		duration=97;
		musicClass = "TASOverlordClass";
	};
	class TAS_O13
	{
		name	= "(O13) Panic Room — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O13_PanicRoom.ogg", db + 0, 1.0 };
		duration=144;
		musicClass = "TASOverlordClass";
	};
	class TAS_O14
	{
		name	= "(O14) Mirror — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O14_Mirror.ogg", db + 0, 1.0 };
		duration=119;
		musicClass = "TASOverlordClass";
	};
	class TAS_O15
	{
		name	= "(O15) Overlord — Overlord OST";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\O\O15_Overlord.ogg", db + 0, 1.0 };
		duration=153;
		musicClass = "TASOverlordClass";
	};
	//Overlord OST Extras: see https://www.youtube.com/watch?v=RcAGiS3_sPg , All Rights Reserved
	class TAS_OE1
	{
		name	= "(OE1) Trailer — Overlord OST Extras";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\OE\OE1_Trailer.ogg", db + 0, 1.0 };
		duration=62;
		musicClass = "TASOverlordClass";
	};
	class TAS_OE2
	{
		name	= "(OE2) Overlord (Alternative) — Overlord OST Extras";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\OE\OE2_OverlordAlt.ogg", db + 0, 1.0 };
		duration=171;
		musicClass = "TASOverlordClass";
	};
	class TAS_OE3
	{
		name	= "(OE3) Another Day at the Office — Overlord OST Extras";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\OE\OE3_AnotherDay.ogg", db + 0, 1.0 };
		duration=74;
		musicClass = "TASOverlordClass";
	};
	class TAS_OE4
	{
		name	= "(OE4) Dan's Initial Sketchbook — Overlord OST Extras";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\OE\OE4_DansSketchbook.ogg", db + 0, 1.0 };
		duration=459;
		musicClass = "TASOverlordClass";
	};
	class TAS_OE5
	{
		name	= "(OE5) New England — Overlord OST Extras";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\OE\OE5_NewEngland.ogg", db + 0, 1.0 };
		duration=125;
		musicClass = "TASOverlordClass";
	};
	class TAS_OE6
	{
		name	= "(OE6) Missing Persons — Overlord OST Extras";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\OE\OE6_MissingPersons.ogg", db + 0, 1.0 };
		duration=78;
		musicClass = "TASOverlordClass";
	};
	class TAS_OE7
	{
		name	= "(OE7) Watch Your Step — Overlord OST Extras";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\OE\OE7_WatchYourStep.ogg", db + 0, 1.0 };
		duration=108;
		musicClass = "TASOverlordClass";
	};
	class TAS_OE8
	{
		name	= "(OE8) Thought Leader — Overlord OST Extras";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\OE\OE8_ThoughtLEader.ogg", db + 0, 1.0 };
		duration=135;
		musicClass = "TASOverlordClass";
	};
	class TAS_OE9
	{
		name	= "(OE9) Commune — Overlord OST Extras";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\OE\OE9_Commune.ogg", db + 0, 1.0 };
		duration=177;
		musicClass = "TASOverlordClass";
	};
	class TAS_OE10
	{
		name	= "(OE10) Ascend — Overlord OST Extras";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\OE\OE10_Ascend.ogg", db + 0, 1.0 };
		duration=68;
		musicClass = "TASOverlordClass";
	};
	class TAS_OE11
	{
		name	= "(OE11) Humanoid Target — Overlord OST Extras";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\OE\OE11_HumanoidTarget.ogg", db + 0, 1.0 };
		duration=129;
		musicClass = "TASOverlordClass";
	};
	class TAS_OE12
	{
		name	= "(OE12) Invisible Knife — Overlord OST Extras";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\OE\OE12_InvisibleKnife.ogg", db + 0, 1.0 };
		duration=135;
		musicClass = "TASOverlordClass";
	};
	class TAS_OE13
	{
		name	= "(OE13) Your Senses Decieve (feat. Patric Whitstone) — Overlord OST Extras";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_O\music\OE\OE13_YourSensesDecieve.ogg", db + 0, 1.0 };
		duration=147;
		musicClass = "TASOverlordClass";
	};
};

//makes music viewable in Zeus
class CfgMusicClasses
{
	class TASOverlordClass
	{
		displayName = "SCP: Overlord Music";
	};
};