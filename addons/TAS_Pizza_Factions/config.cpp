//adds custom Pizza uniforms, vehicles, and factions, primarily by CatCaptain and Ricardo with fixes by Guac
//vehicle CBA event handler compat done, do we need do add compat for units too?
class CfgPatches
{
	class TAS_Pizza_Factions
	{
		name = "TAS Faction Addon";
		units[] = 
		{
			"TAS_Dominos_BaseUnit",
			"TAS_Dominos_Employee",
			"TAS_Dominos_Manager",
			"TAS_Dominos_Operative",
			"TAS_PapaJhons_BaseUnit",
			"TAS_PapaJhons_Employee",
			"TAS_PapaJhons_EmployeeCombat",
			"TAS_PapaJhons_Manager",
			"TAS_PapaJhons_Operative",
			"TAS_Dominos_Offroad",
			"TAS_Dominos_Offroad_HMG",
			"TAS_Dominos_Offroad_AT",
			"TAS_PapaJhons_Offroad",
			"TAS_PapaJhons_Offroad_HMG",
			"TAS_PapaJhons_Offroad_AT",
			"TAS_RationPizza_Item"
		};
		weapons[] = 
		{
			"TAS_RationPizza"
		};
		requiredAddons[] = 
		{
			"A3_Characters_F",
			"ace_field_rations"
		};
		author = "TAS Mod Team";
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
	class TAS_Dominos_Zimbabwe
    { 
        displayName = "Dominos Zimbabwe Employees"; 
        priority = 1; 	// Position in list. 
        side = 1; 		// Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; 		//Custom Icon 
    };  
	class TAS_Papa_Jhons
	{
		displayName = "Papa Jhons Employees";
		priority = 1;
		side = 0;
		icon = "";
	};
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 

/*class cfgVehicleClasses //outdated, do not use. Corresponding config entry is vehicleClass = "MySubcategory";
{
	class TAS_SubGroup_Men
	{
		displayName="Meat Shields";
	};
	class TAS_SubGroup_Cars
	{
		displayName="Pizza Delivery Mobile";
	};
	class TAS_SubGroup_APC
	{
		displayName="Armed Pizza Pew Pew";
	};
};*/

//see https://community.bistudio.com/wiki/Eden_Editor:_Object_Categorization, we are interested in subcatagories which are normally "APC", "Men", etc
//catagory is set my "faction" config parameter below
//subcatagory is set by editorSubcategory = "MySubcategory"; in config
class CfgEditorSubcategories
{
	class TAS_SubGroup_Men // Category class, you point to it in editorSubcategory property
	{
		displayName = "Valued Employees"; // Name visible in the list
	};
	class TAS_SubGroup_Cars
	{
		displayName = "Pizza Delivery Mobiles";
	};
};

#include "CfgVehicles.hpp"

#include "CfgGroups.hpp"

#include "CfgWeapons.hpp"
