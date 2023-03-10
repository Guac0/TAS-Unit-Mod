#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class KJW_Voicemines {
    author="KJW";
    requiredAddons[]=
    {
      "A3_Data_F",
      "A3_Weapons_F",
      "A3_Characters_F",
	  "tfar_core",
		"ace_explosives"
    };
    requiredVersion=1;
		units[] = {""};
		weapons[] = {""};
	};
};

class CfgMagazines { //This is the supported explosives for the Voice trigger
	class CA_Magazine;
	class DemoCharge_Remote_Mag;
	class ATMine_Range_Mag: CA_Magazine {
		class ACE_Triggers {
			SupportedTriggers[]+= {"Voice"};
			class Voice {
				ammo = "ATMine_Range_Ammo";
			};
		};
	};
	class SLAMDirectionalMine_Wire_Mag: ATMine_Range_Mag {
		class ACE_Triggers {
			SupportedTriggers[]+= {"Voice"};
			class Voice {
				ammo = "ACE_SLAMDirectionalMine_Command_Ammo";
			};
		};
	};
	class ClaymoreDirectionalMine_Remote_Mag: CA_Magazine {
		class ACE_Triggers {
			SupportedTriggers[]+= {"Voice"};
			class Voice {
				ammo = "ClaymoreDirectionalMine_Remote_Ammo";
			};
		};
	};
	class APERSBoundingMine_Range_Mag: ATMine_Range_Mag {
		class ACE_Triggers {
			SupportedTriggers[]+= {"Voice"};
			class Voice {
				ammo = "APERSBoundingMine_Range_Ammo";
			};
		};
	};
	class APERSMine_Range_Mag: ATMine_Range_Mag {
		class ACE_Triggers {
			SupportedTriggers[]+= {"Voice"};
			class Voice {
				ammo = "APERSMine_Range_Ammo";
			};
		};
	};
	class IEDLandBig_Remote_Mag: DemoCharge_Remote_Mag {
		class ACE_Triggers {
			SupportedTriggers[]+= {"Voice"};
			class Voice {
				ammo = "ACE_IEDLandBig_Command_Ammo";
			};
		};
	};
	class IEDUrbanBig_Remote_Mag: DemoCharge_Remote_Mag {
		class ACE_Triggers {
			SupportedTriggers[]+= {"Voice"};
			class Voice {
				ammo = "ACE_IEDUrbanBig_Command_Ammo";
			};
		};
	};
 class IEDLandSmall_Remote_Mag: DemoCharge_Remote_Mag {
	 class ACE_Triggers {
		 SupportedTriggers[]+= {"Voice"};
		 class Voice {
			 ammo = "ACE_IEDLandSmall_Command_Ammo";
		 };
	 };
 };
 class IEDUrbanSmall_Remote_Mag: DemoCharge_Remote_Mag {
	 class ACE_Triggers {
		 SupportedTriggers[]+= {"Voice"};
		 class Voice {
			 ammo = "ACE_IEDUrbanSmall_Command_Ammo";
		 };
	 };
 };
};
class ACE_Triggers {
	class Voice {
		isAttachable = 1;
		displayName = "Voice";
		picture = "Autismo_Seals_Unit_Mod\addons\KJW_Voicemines\data\TalkyMan.paa";
		onPlace = "[_this,""Autismo_Seals_Unit_Mod\addons\KJW_Voicemines\scripts\VoiceMine.sqf""] remoteExec [""execVM"",2]; false";
		onSetup = "false";
	};
};