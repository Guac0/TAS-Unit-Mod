#include "CfgPatches.hpp"

// Copy this part to your config.cpp
#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

// Copy this part to ALiVE logistics static data
//[ALIVE_factionDefaultSupplies, "cwr3_faction_tdf", ["cwr3_faction_tdf_AmmoBox","cwr3_faction_tdf_WeaponsBox","cwr3_faction_tdf_LaunchersBox","cwr3_faction_tdf_UniformBox","cwr3_faction_tdf_SupportBox","cwr3_faction_tdf_SupplyBox"]] call ALIVE_fnc_hashSet;

#include "autogen.hpp"