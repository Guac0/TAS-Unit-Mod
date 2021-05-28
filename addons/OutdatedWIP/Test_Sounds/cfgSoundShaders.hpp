// see http://community.bistudio.com/wiki/Sound for more details

class CfgSoundShaders
{
	class Test_Weapon_01_Closure_SoundShader
	{
		samples[] =
		{
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_01", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_02", 1 }
		};
		volume = db-7;
		range = 5;
	};


// Standart shot ---------------------------------------------------------------------------------------------------------------------------

	class Test_Weapon_01_closeShot_SoundShader
	{
		samples[] = // array of actual samples with probability weight, engine will randomly select one sample with no immediate repeat within SoundShader
		{
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closeShot_01", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closeShot_02", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closeShot_03", 1 }
		};
		volume = db0; // basic sound level value in dBFS (or actual sound level value) db6~2, db-6~0.5, simple expressions with sound controllers can be used
		range = 50; // maximum range in meters where sound is played
		rangeCurve = closeShotCurve; // curve class name (CfgSoundCurves) or specific curve definition (array of points)
		// note that curve is stretched to region <0;range>
	};

	class Test_Weapon_01_midShot_SoundShader
	{
		samples[] =
		{
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_midShot_01", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_midShot_02", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_midShot_03", 1 }
		};
		volume = db-2;
		range = 1800;
		rangeCurve[] =
		{
			{0, 0.2},
			{50, 1},
			{300, 0},
			{1800, 0}
		};
	};
	class Test_Weapon_01_distShot_SoundShader
	{
		samples[] =
		{
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_01", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_02", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_03", 1 }
		};
		volume = db0;
		range = 1800;
		rangeCurve[] =
		{
			{0, 0},
			{50, 0},
			{300, 1},
			{1800, 1}
		};
	};


// Reflection Tails ---------------------------------------------------------------------------------------------------------------------------

	class Test_Weapon_01_tailInterior_SoundShader
	{
		samples[] = { { "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailInterior", 1 } };
		volume = interior;
		range = 500;
		limitation = false; // this SoundShader will always be played if interior>0
	};

	class Test_Weapon_01_tailTrees_SoundShader
	{
		samples[] = { { "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailTrees", 1 } };
		volume = (1-interior/1.4)*trees/3;
		range = 1800;
		limitation = true; // this SoundShader belongs to the group of limited SoundShaders
	};

	class Test_Weapon_01_tailForest_SoundShader
	{
		samples[] = { { "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailForest", 1 } };
		volume = (1-interior/1.4)*forest/3;
		range = 1800;
		limitation = true; // this SoundShader belongs to the group of limited SoundShaders
	};

	class Test_Weapon_01_tailMeadows_SoundShader
	{
		samples[] = { { "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailMeadows", 1 } };
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 1800;
		limitation = true; // this SoundShader belongs to the group of limited SoundShaders
	};

	class Test_Weapon_01_tailHouses_SoundShader
	{
		samples[] = { { "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailHouses", 1 } };
		volume = (1-interior/1.4)*houses/3;
		range = 1200;
		limitation = true; // this SoundShader belongs to the group of limited SoundShaders
	};



// Silenced shaders ---------------------------------------------------------------------------------------------------------------------------

	class Test_Weapon_01_silencerShot_SoundShader
	{
		samples[] =
		{
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerShot_01", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerShot_02", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerShot_03", 1 }
		};
		volume = db0;
		range = 150;
		rangeCurve = closeShotCurve;
	};

	class Test_Weapon_01_silencerTailTrees_SoundShader
	{
		samples[] = { { "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailForest", 1 } };
		volume = (1-interior/1.4)*forest/3;
		range = 150;
		rangeCurve[] =
		{
			{0, 1},
			{150, 0.3}
		};
		limitation = true;
	};

	class Test_Weapon_01_silencerTailForest_SoundShader
	{
		samples[] = { { "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailHouses", 1 } };
		volume = (1-interior/1.4)*houses/3;
		range = 150;
		rangeCurve[] =
		{
			{0, 1},
			{150, 0}
		};
		limitation = true;
	};

	class Test_Weapon_01_silencerTailMeadows_SoundShader
	{
		samples[] = { { "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailInterior", 1 } };
		volume = interior;
		range = 150;
		rangeCurve[] =
		{
			{0, 1},
			{50, 0.3},
			{150, 0}
		};
		limitation = true;
	};

	class Test_Weapon_01_silencerTailHouses_SoundShader
	{
		samples[] = { { "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailMeadows", 1 } };
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 150;
		rangeCurve[] =
		{
			{0, 1},
			{150, 0.3}
		};
		limitation = true;
	};

	class Test_Weapon_01_silencerTailInterior_SoundShader
	{
		samples[] = { { "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailTrees", 1 } };
		volume = (1-interior/1.4)*trees/3;
		range = 150;
		rangeCurve[] =
		{
			{0, 1},
			{150, 0.3}
		};
		limitation = true;
	};
};