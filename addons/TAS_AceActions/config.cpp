//Adds some actions to the ace interact menu
//Clutter cutter inspired by GRAD/AFI
class CfgPatches
{
	class TAS_BrightLite
	{
		name = "TAS BrightLite Addon";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"ace_interact_menu","vurtual_seat"};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class TAS_MineSign {
                    displayName = "Place Minefield Sign";
					condition = "ACE_player == (vehicle ACE_player)"; //only if on foot (would also do need a defusal kit but 1. no frame-friendly way of checking and 2. everyone should be able to mark mines)
					exceptions[] = {};
					statement = "ACE_player playActionNow 'medic'; [6, [], {_obj = createVehicle ['Land_Sign_Mines_F', position ACE_player, [], 0, 'CAN_COLLIDE']; [_obj, true, [0, 2, 0], 0] call ace_dragging_fnc_setCarryable; [ace_player,_obj] call ace_dragging_fnc_carryObject; }, {ACE_player playActionNow 'medicstop';}, 'Unfolding sign...'] call ace_common_fnc_progressBar"; //start dragging after deployed. //ACE_player switchMove ''; //to get unstuck
                        //Small triangular sign: Land_Sign_Mines_F
                        //Tall triangular sign: Land_Sign_MinesTall_English_F
                        //Huge rectangular sign: Land_Sign_MinesDanger_English_F
                    //icon = ""; //might add a custom icon later, for now let's see what default looks like
                };
                class TAS_GrassCutter {
					displayName = "Remove grass";
					condition = "((stance ACE_player) == 'PRONE') && (ACE_player == (vehicle ACE_player))"; //only if prone and on foot (check if prone handles check by itself)
					exceptions[] = {};
					statement = "ACE_player playActionNow 'medic'; [6, [], {_obj = createVehicle ['Land_ClutterCutter_medium_F', position ACE_player, [], 0, 'CAN_COLLIDE'];}, {ACE_player playActionNow 'medicstop';}, 'Removing clutter...'] call ace_common_fnc_progressBar";
					//icon = ""; //might add a custom icon later, for now let's see what default looks like
				};
				class TAS_DigFoxhole {
					displayName = "Dig Foxhole";
					condition = "_player call ace_trenches_fnc_canDigTrench"; //let ace handle checking
					exceptions[] = {};
					statement = "ACE_player playActionNow 'AinvPknlMstpSnonWnonDnon_medic4'; [10, [], {_obj = createVehicle ['vurtual_foxhole', position ACE_player, [], 0, 'CAN_COLLIDE']; _obj enableSimulationGlobal true;}, {ACE_player playActionNow 'medicstop';}, 'Digging Foxhole...'] call ace_common_fnc_progressBar";
					//icon = ""; //might add a custom icon later, for now let's see what default looks like
				};
			};
		};
	};
};