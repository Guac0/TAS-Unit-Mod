class CfgGroups
{
	//********************************************************************************************************************************************************************************************
    //*****            Dominos Groups              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
	class Indep
	{
		class TAS_FFA_Faction
		{
			name = "FFA";
			//********************************************************************************************************************************************************************************************
			//*****            FFA Infantry Groups              *****************************************************************************************************************************************************
			//********************************************************************************************************************************************************************************************
			class Infantry
			{
				name = "FFA Infantry Groups";
				class TAS_FFA_SidearmTeam
				{
					name = "FFA Sidearm Team";
					side = 2;
					faction = "TAS_FFA_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "TAS_FFA_Sidearm";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TAS_FFA_Sidearm";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TAS_FFA_Sidearm";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TAS_FFA_Sidearm";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TAS_FFA_Sidearm";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_FFA_FireteamNoUgl
				{
					name = "FFA Light Fireteam (No UGLs)";
					side = 2;
					faction = "TAS_FFA_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "TAS_FFA_Rifleman";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TAS_FFA_Rifleman";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TAS_FFA_Rifleman";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TAS_FFA_Rifleman";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TAS_FFA_Rifleman";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_FFA_HeavyFireteam
				{
					name = "FFA Heavy Fireteam (All UGLs)";
					side = 2;
					faction = "TAS_FFA_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "TAS_FFA_TeamLeader";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TAS_FFA_TeamLeader";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TAS_FFA_TeamLeader";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TAS_FFA_TeamLeader";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TAS_FFA_TeamLeader";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_FFA_OperativeTeam
				{
					name = "FFA Operative Team";
					side = 2;
					faction = "TAS_FFA_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "TAS_FFA_Operative";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TAS_FFA_Operative";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TAS_FFA_Operative";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TAS_FFA_Operative";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TAS_FFA_Operative";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_FFA_Fireteam
				{
					name = "FFA Fireteam";
					side = 2;
					faction = "TAS_FFA_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "TAS_FFA_TeamLeader";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TAS_FFA_Rifleman";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TAS_FFA_Rifleman";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TAS_FFA_Rifleman";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TAS_FFA_Rifleman";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
			};
			//********************************************************************************************************************************************************************************************
			//*****            FFA Vehicle Groups              *****************************************************************************************************************************************************
			//********************************************************************************************************************************************************************************************
			/*class Vehicles
			{
				name = "FFA Vehicle Groups";
				class TAS_Dominos_MotorizedOffroad
				{
					name = "Pizza Delivery Team";
					side = 2;
					faction = "TAS_FFA_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "TAS_Dominos_Offroad";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TAS_FFA_TeamLeader";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TAS_FFA_Sidearm";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TAS_FFA_Sidearm";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TAS_FFA_Sidearm";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TAS_FFA_Sidearm";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
				};
				class TAS_Dominos_MotorizedCombatOffroad
				{
					name = "Combat Pizza Delivery Team";
					side = 2;
					faction = "TAS_FFA_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "TAS_Dominos_Offroad";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TAS_FFA_TeamLeader";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TAS_FFA_Rifleman";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TAS_FFA_Rifleman";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TAS_FFA_Rifleman";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TAS_FFA_Rifleman";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
				};
				class TAS_Dominos_Technicals
				{
					name = "Pizza Delivery Technicals";
					side = 2;
					faction = "TAS_FFA_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "TAS_Dominos_Offroad_HMG";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TAS_Dominos_Offroad_HMG";
						rank = "SERGEANT";
						position[] = {10, -10, 0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TAS_Dominos_Offroad_AT";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
					};
				};
			};*/
		};		
	};
};