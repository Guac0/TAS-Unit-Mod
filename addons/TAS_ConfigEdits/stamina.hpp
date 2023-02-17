class CfgMovesFatigue { 
	staminaDuration = 180; //total amount of stamina. default 60
	staminaCooldown = 5; //when you run out of stamina the sprinting is disabled for this duration. default 10
	staminaRestoration = 15; //time required for your current stamina pool (total stamina - inventory load) to restore. default 30
	aimPrecisionSpeedCoef = 5; //aimPrecision adjusting rate coefficient. default 5
	terrainDrainSprint = -1; //when terrain gradient disable sprint, this stamina value is added to every animation state. default -1
	terrainDrainRun = -1; //when terrain gradient enable force walk, this stamina value is added to every animation state. default -1
	terrainSpeedCoef = 0.9; //when terrain gradient disable sprint, animation speed is multiplied by this value. default 0.9

	/*
	//vanilla
	class CfgMovesFatigue
	{
		staminaDuration = 60;
		staminaCooldown = 10;
		staminaRestoration = 30;
		aimPrecisionSpeedCoef = 5;
		terrainDrainSprint = -1;
		terrainDrainRun = -1;
		terrainSpeedCoef = 0.9;
	};
	*/
};
