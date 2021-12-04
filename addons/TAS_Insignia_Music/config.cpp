//adds custom insignia and music, primary config and textures by Guac, secondary config by Hoxxi, secondary textures by various
class CfgPatches {
	class TAS_Insignia_Music
	{
		name = "TAS Insignia and Music Addon";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

class CfgUnitInsignia
{
	//TAS original insignia
	#include "tasInsignia.hpp"

	//SCP MTF patches
	#include "mtfInsignia.hpp"
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
		TAS_Music_1,
		TAS_Music_2,
		TAS_Music_3,
		TAS_Music_4,
		TAS_Music_5,
		TAS_Music_6,
		TAS_Music_7,
		TAS_Music_8,
		TAS_Music_9,
		TAS_Music_10,
		TAS_Music_11,
		TAS_Music_12,
		TAS_Music_13,
		TAS_Music_14,
		TAS_Music_15,
		TAS_Music_16,
		TAS_OM_1,
		TAS_OM_Chillout_1,
		TAS_OM_Chillout_2,
		TAS_OM_Chillout_3,
		TAS_OM_Chillout_4,
		TAS_OM_Chillout_5,
		TAS_OM_Chillout_6,
		TAS_OM_Chillout_7,
		TAS_OM_Chillout_8,
		TAS_OM_Chillout_9,
		TAS_OM_Chillout_10,
		TAS_OM_Chillout_11,
		TAS_OM_Chillout_12,
		TAS_OM_Chillout_13,
		TAS_OM_Chillout_14,
		TAS_OM_Chillout_15,
		TAS_OM_Chillout_16,
		TAS_OM_Chillout_17,
		TAS_OM_Chillout_18,
		TAS_OM_Chillout_19,
		TAS_OM_Chillout_20,
		TAS_OM_Dance_1,
		TAS_OM_Dance_2,
		TAS_OM_Dance_3,
		TAS_OM_Metal_1,
		TAS_OM_Metal_2,
		TAS_OM_Metal_3,
		TAS_OM_OST_1,
		TAS_OM_OST_2,
		TAS_OM_OST_3,
		TAS_OM_OST_4,
		TAS_OM_OST_5,
		TAS_OM_OST_6,
		TAS_OM_OST_7,
		TAS_OM_OST_8,
		TAS_OM_OST_9,
		TAS_OM_OST_10,
		TAS_OM_OST_11,
		TAS_OM_OST_12,
		TAS_OM_OST_13,
		TAS_OM_OST_14,
		TAS_OM_OST_15,
		TAS_OM_OST_16,
		TAS_OM_POP_1,
		TAS_OM_ROCK_1,
		TAS_OM_ROCK_2,
		TAS_OM_ROCK_3,
		TAS_OM_ROCK_4,
		TAS_OM_ROCK_5,
		TAS_OM_ROCK_6,
		TAS_OM_ROCK_7,
		TAS_OM_ROCK_8,
		TAS_OM_ROCK_9,
		TAS_OM_ROCK_10,
		TAS_OM_ROCK_11,
		TAS_OM_ROCK_12,
		TAS_OM_ROCK_13,
		TAS_OM_ROCK_14,
		TAS_OM_ROCK_15,
		TAS_OM_ROCK_16,
		TAS_OM_ROCK_17,
		TAS_OM_ROCK_18,
		TAS_OM_ROCK_19,
		TAS_OM_ROCK_20,
		TAS_OM_ROCK_21,
		TAS_OM_ROCK_22,
		TAS_OM_ROCK_23,
		TAS_OM_ROCK_24
	};
	//Misc. Music: All Rights Reserved to the artists listed
	#include "miscMusic.hpp"

	//*********************************************
	//*************Old Man Music*******************
	//*********************************************
	#include "oldManMusic.hpp"
};

//makes music viewable in Zeus
class CfgMusicClasses
{
	class TASMusicClass
	{
		displayName = "TAS Addon Music";
	};
	class TAS_OM_MusicClass
	{
		displayName = "Old Man Music";
	};
};