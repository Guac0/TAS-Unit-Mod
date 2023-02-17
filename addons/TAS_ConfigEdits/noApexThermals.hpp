//CTRG
	class NVGogglesB_blk_F;
	class TAS_ENVG_black_NoThermals: NVGogglesB_blk_F {
		//author = "Bohemia Interactive";
		displayName = "ENVG-II (Black) [No Thermals]";
		visionMode[] = {"Normal", "NVG"};
		thermalMode[] = {};	//default is 0
	};
	class NVGogglesB_grn_F;
	class TAS_ENVG_green_NoThermals: NVGogglesB_grn_F {
		//author = "Bohemia Interactive";
		displayName = "ENVG-II (Green) [No Thermals]";
		visionMode[] = {"Normal", "NVG"};
		thermalMode[] = {};	//default is 0
	};
	class NVGogglesB_gry_F;
	class TAS_ENVG_grey_NoThermals: NVGogglesB_gry_F {
		//author = "Bohemia Interactive";
		displayName = "ENVG-II (Grey) [No Thermals]";
		visionMode[] = {"Normal", "NVG"};
		thermalMode[] = {};	//default is 0
	};

	//VIPER
	class H_HelmetO_ViperSP_hex_F;
	class TAS_ViperHelmet_hex_NoThermals: H_HelmetO_ViperSP_hex_F {
		//author = "Bohemia Interactive";
		displayName = "Special Purpose Helmet (Hex) [No Thermals]";
		//subItems[] = {"Integrated_NVG_F"};
		subItems[] = {"TAS_ENVG_black_NoThermals"};
	};
	class TAS_ViperHelmet_ghex_NoThermals: TAS_ViperHelmet_hex_NoThermals
	{
		//author = "Bohemia Interactive";
		displayName = "Special Purpose Helmet (Green Hex) [No Thermals]";
		picture = "\A3\Characters_F_Exp\OPFOR\Data\UI\icon_H_HelmetO_ViperSP_ghex_F_ca.paa";
		DLC = "Expansion";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\headgear_vipersp_tna_co.paa"};
	};