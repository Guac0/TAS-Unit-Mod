//adds custom music for 40k to Arma (No copyright infringement intended), primary config by Guac
class CfgPatches {
	class TAS_Music_40k
	{
		name = "TAS Music Addon — 40k Section";
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
		TAS_S1,
		TAS_S2,
		TAS_S3,
		TAS_S4,
		TAS_S5,
		TAS_S6,
		TAS_S7,
		TAS_S8,
		TAS_S9,
		TAS_S10,
		TAS_S11,
		TAS_S12,
		TAS_S13,
		TAS_S14,
		TAS_S15,
		TAS_S16,
		TAS_S17,
		TAS_S18,
		TAS_S19,
		TAS_S20,
		TAS_S21,
		TAS_S21,
		TAS_S22
	};
	//Stringstorm music, see https://www.youtube.com/watch?v=u6SPFiBt_h4&t=0s , All Rights Reserved
	class TAS_S1
	{
		name	= "Stringstorm — Adeptus Mechanicum";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\AdeptusMechanicum.ogg", db + 0, 1.0 };
		duration=205;
		musicClass = "TAS40kClass";
	};
	class TAS_S2
	{
		name	= "Stringstorm — Ave Imperator";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\AveImperator.ogg", db + 0, 1.0 };
		duration=225;
		musicClass = "TAS40kClass";
	};
	class TAS_S3
	{
		name	= "Stringstorm — Break the Dawn";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\BreakTheDawn.ogg", db + 0, 1.0 };
		duration=136;
		musicClass = "TAS40kClass";
	};
	class TAS_S4
	{
		name	= "Stringstorm — Break the Dawn Instrumental";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\BreakTheDawnInstrumental.ogg", db + 0, 1.0 };
		duration=173;
		musicClass = "TAS40kClass";
	};
	class TAS_S5
	{
		name	= "Stringstorm — Cadian Blood";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\CadianBlood.ogg", db + 0, 1.0 };
		duration=239;
		musicClass = "TAS40kClass";
	};
	class TAS_S6
	{
		name	= "Stringstorm — Cadian Blood Instrumental";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\CadianBloodInstrumental.ogg", db + 0, 1.0 };
		duration=238;
		musicClass = "TAS40kClass";
	};
	class TAS_S7
	{
		name	= "Stringstorm — Cadian XXth";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\CadianXXth.ogg", db + 0, 1.0 };
		duration=259;
		musicClass = "TAS40kClass";
	};
	class TAS_S8
	{
		name	= "Stringstorm — Death of Horus";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\DeathOfHorus.ogg", db + 0, 1.0 };
		duration=207;
		musicClass = "TAS40kClass";
	};
	class TAS_S9
	{
		name	= "Stringstorm — Harakoni Warhawks";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\HarakoniWarhawks.ogg", db + 0, 1.0 };
		duration=253;
		musicClass = "TAS40kClass";
	};
	class TAS_S10
	{
		name	= "Stringstorm — Imperial Fists";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\ImperialFists.ogg", db + 0, 1.0 };
		duration=252;
		musicClass = "TAS40kClass";
	};
	class TAS_S11
	{
		name	= "Stringstorm — Krieg";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\Krieg.ogg", db + 0, 1.0 };
		duration=243;
		musicClass = "TAS40kClass";
	};
	class TAS_S12
	{
		name	= "Stringstorm — Lord Commander Instrumental";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\LordCommanderInstrumental.ogg", db + 0, 1.0 };
		duration=185;
		musicClass = "TAS40kClass";
	};
	class TAS_S13
	{
		name	= "Stringstorm — Ogre Awaken";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\OgreAwaken.ogg", db + 0, 1.0 };
		duration=201;
		musicClass = "TAS40kClass";
	};
	class TAS_S14
	{
		name	= "Stringstorm — Ork Waaaaagh";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\OrkWaaaaagh.ogg", db + 0, 1.0 };
		duration=188;
		musicClass = "TAS40kClass";
	};
	class TAS_S15
	{
		name	= "Stringstorm — Ork Waaaaagh Instrumental";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\OrkWaaaaaghInstrumental.ogg", db + 0, 1.0 };
		duration=122;
		musicClass = "TAS40kClass";
	};
	class TAS_S16
	{
		name	= "Stringstorm — Purging With My Kin";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\PurgingWithMyKin.ogg", db + 0, 1.0 };
		duration=225;
		musicClass = "TAS40kClass";
	};
	class TAS_S17
	{
		name	= "Stringstorm — Tallarn";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\Tallarn.ogg", db + 0, 1.0 };
		duration=202;
		musicClass = "TAS40kClass";
	};
	class TAS_S18
	{
		name	= "Stringstorm — Ten Thousand Years";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\TenThousandYears.ogg", db + 0, 1.0 };
		duration=205;
		musicClass = "TAS40kClass";
	};
	class TAS_S19
	{
		name	= "Stringstorm — Titanicus";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\Titanicus.ogg", db + 0, 1.0 };
		duration=216;
		musicClass = "TAS40kClass";
	};
	class TAS_S20
	{
		name	= "Stringstorm — TTS Theme";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\TtsTheme.ogg", db + 0, 1.0 };
		duration=194;
		musicClass = "TAS40kClass";
	};
	class TAS_S21
	{
		name	= "Stringstorm — TTS Theme Instrumental";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\TtsThemeInstrumental.ogg", db + 0, 1.0 };
		duration=194;
		musicClass = "TAS40kClass";
	};
	class TAS_S22
	{
		name	= "Stringstorm — Warriors of the God Emperor";
		sound[]	= { "Autismo_Seals_Unit_Mod\addons\TAS_Music_40k\music\Stringstorm\WarriorsOfTheGodEmperor.ogg", db + 0, 1.0 };
		duration=219;
		musicClass = "TAS40kClass";
	};
};

//makes music viewable in Zeus
class CfgMusicClasses
{
	class TAS40kClass
	{
		displayName = "TAS 40k Music";
	};
};