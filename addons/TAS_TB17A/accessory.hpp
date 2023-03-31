	
	/** Special suppressor for test weapon */
	/*
	class ItemCore; /// base class for accessories
	class InventoryMuzzleItem_Base_F; /// base class for muzzle suppressors
	class InventoryUnderItem_Base_F; /// base class for #bipodz
	
	class test_suppressor: ItemCore
	{	
		scope = 2;	
		displayName=$STR_A3_cfgWeapons_muzzle_snds_H0;
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\A3\weapons_f\acc\acca_snds_h_F";
		class ItemInfo: InventoryMuzzleItem_Base_F
        {
            mass = 5;
			class MagazineCoef
			{
				initSpeed 		= 0.6;
			};
			
			class AmmoCoef
			{
				// bullet ballistic modifiers
				hit				= 1;
				typicalSpeed	= 1;
				airFriction		= 1;
				
				// AI modifiers
				visibleFire		= 0.5;
				audibleFire		= 0.3;
				visibleFireTime	= 0.5;
				audibleFireTime	= 0.5;
				cost			= 1;
			}; 

			muzzleEnd 			= "zaslehPoint"; // memory point in muzzle supressor's model
			alternativeFire 	= "Zasleh2";  // class in cfgWeapons with model of muzzle flash	

			soundTypeIndex		= 1; /// defines the position in sound[] array in the rifle

			class MuzzleCoef
			{
				dispersionCoef			= 0.8f;
				artilleryDispersionCoef	= 1.0f;

				fireLightCoef			= 0.1f;

				recoilCoef				= 1.0f;
				recoilProneCoef			= 1.0f;

				minRangeCoef = 1.0f; minRangeProbabCoef = 1.0f;
				midRangeCoef = 1.0f; midRangeProbabCoef = 1.0f;
				maxRangeCoef = 1.0f; maxRangeProbabCoef = 1.0f;
			};			
        };
	};	
	
	class test_bipod_01_F: ItemCore
	{
		scope 				= 2;																	/// available in Arsenal
		displayName			= "My Little Bipod";													/// name of item in Inventory (and Arsenal)
		picture				= "\A3\Weapons_F_Mark\Data\UI\gear_accu_bipod_01_snd_CA.paa";			/// icon in Inventory
		model 				= "\Samples_f\Test_weapon_01\test_bipod_01_F.p3d";						/// path to model
		class ItemInfo: InventoryUnderItem_Base_F
        {
            deployedPivot	= "bipod";		/// what point should be used to be on surface while unfolded
			hasBipod		= true;			/// bipod obviously has a bipod
			mass			= 10;			/// what is the mass of the object
			soundBipodDown[] 	= {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",db-3, 1, 20};	/// what sound should be played during unfolding
			soundBipodUp[] 		= {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",db-3, 1, 20};		/// what sound should be played during folding			
        };
		inertia = 0.2;						/// how much does the bipod add to inertia of the weapon
	};	
	*/