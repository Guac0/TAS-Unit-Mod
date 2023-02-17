class cfgSurfaces {
	class Default{};
	class oski_corran_thistle_stony_Surface: Default
	{
		files = "oski_corran_thistle_stony_*";
		rough = 0.08;
		maxSpeedCoef = 0.75;
		dust = 0.05;
		soundEnviron = "drygrass";
		surfaceFriction = 1.8;
		character = "oski_corran_thistle_stony_Character";
		soundHit = "soft_ground";
		impact = "hitgroundsoft";
		lucidity = 4;
		grassCover = 0.1;
	};
	class oski_corran_wildgrass_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_ground_forest_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_leaves_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_wornground_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_strdirt_Surface: Default
	{
		ACE_canDig = 1;
	};
	//class oski_corran_concrete_Surface: Default
	//{
	//};
	class oski_corran_beach_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_grass_green_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_asphalt_Surface: Default
	{
	};
	class oski_corran_mud_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_main_road_surface: oski_corran_asphalt_Surface
	{
		character = "empty";
		files = "oski_main_road*";
	};
	class oski_roadtarmac_highway_surface: oski_corran_asphalt_Surface
	{
		character = "empty";
		files = "oski_roadtarmac_highway*";
	};
	class oski_roaddirt_path_surface: oski_corran_wornground_Surface
	{
		character = "empty";
		files = "oski_roaddirt_path*";
		ACE_canDig = 1;
	};
	class oski_roaddirt_road_surface: oski_corran_wornground_Surface
	{
		character = "empty";
		files = "oski_roaddirt_road*";
		ACE_canDig = 1;
	};
};
