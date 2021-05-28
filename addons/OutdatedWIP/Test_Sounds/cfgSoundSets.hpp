// see http://community.bistudio.com/wiki/Sound for more details

class CfgSoundSets
{
	class Test_Weapon_01_Shot_SoundSet
	{
		// array of SoundShaders to be played together with 100% synchronization
		// note that not all SoundShaders will necessarily play, it depends on their specific configuration and also on soundShadersLimit parameter
		soundShaders[] =
		{
			Test_Weapon_01_Closure_SoundShader,
			Test_Weapon_01_closeShot_SoundShader,
			Test_Weapon_01_midShot_SoundShader,
			Test_Weapon_01_distShot_SoundShader
		};

		volumeFactor = 1.6; // volume multiplicator factor
		volumeCurve = Test_Weapon_01_InverseSquareCurve; // amplitude attenuation curve, can be class name or array of points (CfgSoundCurves)
		sound3DProcessingType = Test_Weapon_01_Shot3DProcessingType; // sound processing type class name (CfgSound3DProcessors)
		distanceFilter = Test_Weapon_01_ShotDistanceFreqAttenuationFilter; // class name of custom distance frequency attenuation filter (CfgDistanceFilters)
		spatial = true; // is sound considered as positional
		doppler = false; // doppler effect simulation
		loop = false;
	};

class Test_Weapon_01_Tail_SoundSet
	{
		soundShaders[] =
		{
			Test_Weapon_01_tailInterior_SoundShader,
			Test_Weapon_01_tailTrees_SoundShader,
			Test_Weapon_01_tailForest_SoundShader,
			Test_Weapon_01_tailMeadows_SoundShader,
			Test_Weapon_01_tailHouses_SoundShader
		};

		soundShadersLimit = 2;
		// engine will play only soundShadersLimit number of SoundShaders with highest volume value (including calculation of rangeCurve) from the group of SoundShaders which has limitation parameter set to true plus all the others

		volumeFactor = 1;
		volumeCurve = Test_Weapon_01_InverseSquareCurve;
		frequencyRandomizerMin = 0.01; // parameters for randomization of frequency to avoid flanging effect when the same sounds are playing in high rate
		frequencyRandomizer = 0.05;
		sound3DProcessingType = Test_Weapon_01_ShotTail3DProcessingType;
		distanceFilter = Test_Weapon_01_ShotTailDistanceFreqAttenuationFilter;
		spatial = true;
		doppler = false;
		loop = false;
	};

// Silenced SoundSets ------------------------------------------------

class Test_Weapon_01_silencerShot_SoundSet
	{
		soundShaders[] =
		{
			Test_Weapon_01_silencerShot_SoundShader
		};

		volumeFactor = 1;
		volumeCurve = Test_Weapon_01_InverseSquareCurve;
		spatial = true;
		doppler = false;
		loop = false;
		sound3DProcessingType = Test_Weapon_01_Shot3DProcessingType;
	};

class Test_Weapon_01_silencerTail_SoundSet
	{
		soundShaders[] =
		{
			Test_Weapon_01_silencerTailTrees_SoundShader,
			Test_Weapon_01_silencerTailForest_SoundShader,
			Test_Weapon_01_silencerTailMeadows_SoundShader,
			Test_Weapon_01_silencerTailHouses_SoundShader,
			Test_Weapon_01_silencerTailInterior_SoundShader
		};

		volumeFactor = 0.7;
		volumeCurve = Test_Weapon_01_InverseSquareCurve;
		spatial = true;
		doppler = false;
		loop = false;
		soundShadersLimit = 2;
		sound3DProcessingType = Test_Weapon_01_ShotTail3DProcessingType;
	};

};