////////////////////////////////////////////////////
	////////////////// Rebreather //////////////////////
	////////////////////////////////////////////////////
	//armor isnt edited so advised that you increase player health
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class V_RebreatherB: Vest_Camo_Base //NATO rebreather that other ones inherit from.
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100"; //bandalier is supply 80, carrier special rig is 100, LBV Grenadier harness is 120, carrier rig is supply 140
			class HitpointsProtectionInfo
			{
				/*class Neck //rebreather doesnt have this by default
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms //rebreather doesnt have this by default
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};*/
				class Chest //rebreather doesnt have this by default
				{
					hitpointName = "HitChest";
					armor = 30; // GA carrier rig is 78
					passThrough = 0.3; // GA carrier rig is 0.6
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 30; //default 8, GA carrier rig is 78
					passThrough = 0.3; //default 0.5, GA carrier rig is 0.6
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16; //default 8, GA carrier rig is 16
					passThrough = 0.3; //default 0.5, GA carrier rig is 0.3
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16; //default 8, GA carrier rig is 16
					passThrough = 0.3; //default 0.5, GA carrier rig is 0.3
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3; //default 0.5, GA carrier rig is 0.6
				};
			};
		};
	};
	

	/* how aegis does it
	class ItemCore;
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo;
	};
	class V_Rangemaster_belt: Vest_NoCamo_Base
	{
		displayName = "$STR_A3_A_CfgWeapons_V_Rangemaster_belt0";
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
		};
	};
	*/