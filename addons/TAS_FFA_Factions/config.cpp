//adds custom FFA faction (art and original config by Tolly, config expansion by Guac)
class CfgPatches
{
	class TAS_FFA_Factions
	{
		name = "TAS FFA Faction Addon";
		units[] = {
			//"TAS_FFA_Soldier",
			"TAS_FFA_Officer",
			"TAS_FFA_Headgear_Helmet",
			"TAS_FFA_BaseUnit",
			"TAS_FFA_Sidearm",
			"TAS_FFA_Rifleman",
			"TAS_FFA_TeamLeader",
			"TAS_FFA_Operative"
		};
		weapons[] = {
			"TAS_FFA_uniformSoldier",
			"TAS_FFA_uniformOfficer",
			"TAS_FFA_Helmet"
		};
		requiredAddons[] = {
			"A3_Characters_F"
		};
		author = "Tolly";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

class CBA_Extended_EventHandlers_base; //we'll use this for the vehicles' CBA compat later (units already have compat, perhaps through inheritance that didn't work for vics?)

//************************************************************************************************************************************************************************************************
//*****             Definitions                *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
#define MAG_1(a) a
#define MAG_2(a) a, a
#define MAG_3(a) a, a, a
#define MAG_4(a) a, a, a, a
#define MAG_5(a) a, a, a, a, a
#define MAG_6(a) a, a, a, a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_8(a) a, a, a, a, a, a, a, a
#define MAG_9(a) a, a, a, a, a, a, a, a, a
#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{  
	class TAS_FFA_Faction
    { 
        displayName = "FFA"; 
        priority = 1; 	// Position in list. 
        side = 2; 		// Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; 		//Custom Icon 
    };
};

//see https://community.bistudio.com/wiki/Eden_Editor:_Object_Categorization, we are interested in subcatagories which are normally "APC", "Men", etc
//catagory is set my "faction" config parameter below
//subcatagory is set by editorSubcategory = "MySubcategory"; in config
class CfgEditorSubcategories
{
	class TAS_FFAA_SubGroup_Men // Category class, you point to it in editorSubcategory property
	{
		displayName = "FFA Men"; // Name visible in the list
	};
	/*class TAS_FFAA_SubGroup_Cars
	{
		displayName = "Pizza Delivery Mobiles";
	};*/
};

#include "CfgVehicles.hpp"

#include "CfgGroups.hpp"

#include "CfgWeapons.hpp"
