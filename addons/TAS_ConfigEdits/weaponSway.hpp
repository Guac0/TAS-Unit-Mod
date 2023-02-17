class CfgImprecision
{
	class Primary
	{
		verticalRadius = 0.175; //0.5
		horizontalRadius = 0.035; //0.1
	};
	class Secondary
	{
		verticalRadius = 0.035; //0.1
		horizontalRadius = 0.175; //0.5
	};

	/*
	//Vanilla
	class Primary
	{
		fatigue = 1;
		verticalRadius = 0.5;
		horizontalRadius = 0.1;
		size = 1;
		maxSize = 10;
		speed = 0.2;
		maxSpeed = 2;
		damage = 5;
		inertia = 0;
		breathing = 0.1;
	};
	class Secondary
	{
		fatigue = 1;
		verticalRadius = 0.1;
		horizontalRadius = 0.5;
		size = 1;
		maxSize = 40;
		speed = 0.4;
		maxSpeed = 0.4;
		damage = 10;
		inertia = 1;
		breathing = 1;
	};
	//50%
	class Primary
	{
		verticalRadius = 0.25; //0.25
		horizontalRadius = 0.05; //0.05
	};
	class Secondary
	{
		verticalRadius = 0.05; //0.05
		horizontalRadius = 0.25; //0.25
	};
	
	//10%
	class CfgImprecision
	{
		class Primary
		{
			verticalRadius = 0.15;
			horizontalRadius = 0.1;
		};
		class Secondary
		{
			verticalRadius = 0.15;
			horizontalRadius = 0.1;
		};
	};

	//0%
	class CfgImprecision
	{
		class Primary
		{
			verticalRadius = 0;
			horizontalRadius = 0;
		};
		class Secondary
		{
			verticalRadius = 0;
			horizontalRadius = 0;
		};
	};
	*/
};

class CfgBreathing
{
	maxHoldTime = 15; //was 12
	coefSpeed = 2; //was 2.5
	outOfBreathCoef = 3; //was 5
	/*
	//vanilla
	maxHoldTime = 8;
	inhaleDuration = 1.5;
	coefSpeed = 10;
	outOfBreathCoef = 20;
	*/
};
class CfgWeaponHandling
{
	class SwayDistortion
	{
		rate = 5; //was 6
		decay = 2.5; //was 3
		maximum = 3.5; //was 4
		//gunnerCoef = 1.2;
		/*
		//vanilla
		rate = 14;
		decay = 7;
		maximum = 10;
		gunnerCoef = 1.2;
		*/
	};
};