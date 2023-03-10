//cfg vehicles
//tfar_backpacks
/* default sizes
TFAR_anarc164: maximumLoad = 20;
    mass = 160;
TFAR_anarc210: maximumLoad = 20;
    mass = 160;
TFAR_anprc155: maximumLoad = 160;
    mass = 160;
TFAR_bussole: maximumLoad = 30;
    mass = 120;
TFAR_mr3000: maximumLoad = 160;
    mass = 160;
TFAR_mr6000l: maximumLoad = 20;
    mass = 160;
TFAR_rt1523g: maximumLoad = 50;
    mass = 80;
B_RadioBag_01_base_F: maximumLoad = 80;
	mass = 160;

//164, 210, mr6000l, RT BLACK, FABRIC, GREEN, SAGE  are same model
//155, mr3000, RT BIG are same model
//bussole, RT BWMOD, RT RHS
*/

class TFAR_Bag_Base;

class TFAR_anarc164: TFAR_Bag_Base {
	maximumLoad = 160;
};
class TFAR_anarc210: TFAR_Bag_Base {
	maximumLoad = 160;
};
class TFAR_mr6000l: TFAR_Bag_Base {
	maximumLoad = 160;
};
class TFAR_rt1523g_sage: TFAR_Bag_Base {
	maximumLoad = 160;
};

class TFAR_anprc155: TFAR_Bag_Base {
	maximumLoad = 240;
};
class TFAR_mr3000: TFAR_Bag_Base {
	maximumLoad = 240;
};
class TFAR_rt1523g_big: TFAR_Bag_Base {
	maximumLoad = 240;
};

class TFAR_bussole: TFAR_Bag_Base {
	maximumLoad = 80;
};
class TFAR_rt1523g: TFAR_Bag_Base {
	maximumLoad = 80;
};
class TFAR_rt1523g_bwmod: TFAR_Bag_Base {
	maximumLoad = 80;
};
class TFAR_rt1523g_rhs: TFAR_Bag_Base {
	maximumLoad = 80;
};

class B_RadioBag_01_base_F: TFAR_Bag_Base {
	maximumLoad = 160;
};