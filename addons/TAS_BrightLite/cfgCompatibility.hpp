//adds rail compatibility using code derived from ace laserpointer
//this first section is probably outdated and should be deleted
	//dont delete, PointerSlot_Rail needs it
class SlotInfo;
class PointerSlot: SlotInfo {
    //compatibleItems[] += {"TAS_acc_brightlite_medium","TAS_acc_brightlite_low","TAS_acc_brightlite_high","TAS_Item_acc_brightlite_sniper"}; //throws errors about array not being found during packing, doesn't matter because CBA joint rails works
};

//Adds all the attachments we've created to the CBA pool of valid attachments
//probably requires CBA
class asdg_SlotInfo; //see line 2503963 in AiO 2.00 ACE for more catagories
class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
        TAS_acc_brightlite_medium = 1;
		TAS_acc_brightlite_low = 1;
		TAS_acc_brightlite_high = 1;
		TAS_acc_brightlite_sniper = 1;
		TAS_acc_brightlite_static = 1;
		TAS_acc_nightlite_medium = 1;
		TAS_acc_nightlite_low = 1;
		TAS_acc_nightlite_high = 1;
		TAS_acc_nightlite_sniper = 1;
		TAS_acc_nightlite_static = 1;
    };
};

class asdg_PistolUnderRail: asdg_SlotInfo
{
	linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
	displayName = "Pointer Slot";
	iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint = "Bottom";
	class compatibleItems
	{
		TAS_acc_brightlite_pistol = 1;
		TAS_acc_nightlite_pistol = 1;
	};
};

class PointerSlot_Rail: PointerSlot {
    class compatibleItems {
        TAS_acc_brightlite_medium = 1;
		TAS_acc_brightlite_low = 1;
		TAS_acc_brightlite_high = 1;
		TAS_acc_brightlite_sniper = 1;
		TAS_acc_brightlite_static = 1;
		TAS_acc_nightlite_medium = 1;
		TAS_acc_nightlite_low = 1;
		TAS_acc_nightlite_high = 1;
		TAS_acc_nightlite_sniper = 1;
		TAS_acc_nightlite_static = 1;
    };
};
