//Invisibile backpack from SagJangi
//https://forums.bohemia.net/forums/topic/222097-battle-belt/
class Bag_Base;
class B_Battle_Belt_F: Bag_Base {
	picture = "\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
	displayName = "Battle Belt";
	model = "\A3\weapons_f\empty";
	author = "SagJangi";
	maximumLoad = 80;
	mass = 8;
	mapSize = 0.47;
	scope = 2;
};
class B_Battle_Belt_XL_F: B_Battle_Belt_F {
	displayName = "Battle Belt XL";
	author = "Alablm";
	maximumLoad = 320;
	mass = 60;
	scopeArsenal = 0; //hide in arsenal
};