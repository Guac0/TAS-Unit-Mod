//Adds a button to the main menu to connect to the TAS server. Thanks to CrowdedLight for his example config. This config by Guac. Requires CBA_A3.
class CfgPatches {
	class TAS_Quickjoin
	{
		name = "TAS Quickjoin Addon";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"cba_main"};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

class RscControlsGroupNoScrollbars;
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
    class controls {
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };
        class GroupMultiplayer: GroupSingleplayer {
			h = "(6 * 	1.5) * 	(pixelH * pixelGrid * 2)";
            class Controls: Controls {
                class ServerBrowser;
                    class ViewOcap: ServerBrowser {
                    idc = -1;
                    text = "TAS OCAP AAR Tool";
                    tooltip = "Connect to the OCAP AAR Tool.";
                    y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    url = "http://arma.d404.nl:5000/";
                    //onbuttonclick = "connectToServer ['###.###.###.###', 2302, '']";
                };
                class JoinTasTeamspeak: ServerBrowser {
                    idc = -1;
                    text = "TAS Teamspeak Server Quickjoin";
                    tooltip = "Connect to the Main TAS Teamspeak Server.";
                    y = "(4 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    url = "ts3server://arma.d404.nl?port=9987";
                    //url = "ts3server://####.####.####?port=9987&password=######";
                    //onbuttonclick = "connectToServer ['###.###.###.###', 2302, '']";
                };
                class ScrollDown: ServerBrowser {
                    idc = -1;
                    text = "Scroll down for more!";
                    tooltip = "More options available below.";
                    y = "(5 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    //url = "ts3server://####.####.####?port=9987&password=######";
                    //onbuttonclick = "connectToServer ['###.###.###.###', 2302, '']";
                };
                class JoinTasServer: ServerBrowser {
                    idc = -1;
                    text = "TAS Arma Server Quickjoin";
                    tooltip = "Connect to the Main TAS Arma Server.";
                    y = "(6 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    //onbuttonclick = "connectToServer ['####.####.####', 2302, '']"; //Cat: ###.###.###.###
                    onbuttonclick = "0 = [_this, 'arma.d404.nl', '2302', 'cheese'] execVM '\Autismo_Seals_Unit_Mod\addons\TAS_Quickjoin\scripts\joinServer.sqf';";
                };
                /*class JoinGuacServer: ServerBrowser {
                    idc = -1;
                    text = "TAS Backup Arma Server Quickjoin";
                    tooltip = "Connect to the Backup TAS Arma Server.";
                    y = "(7 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "0 = [_this, '###.###.###.###', '2302', '######'] execVM '\Autismo_Seals_Unit_Mod\addons\TAS_Quickjoin\scripts\joinServer.sqf';";
                    //onbuttonclick = "0 = [_this, '127.0.0.1', '2302', '######'] execVM '\Autismo_Seals_Unit_Mod\addons\TAS_Quickjoin\scripts\joinServer.sqf';";
                };*/
                /*class JoinGuacTeamspeak: ServerBrowser {
                    idc = -1;
                    text = "TAS Backup Teamspeak Server Quickjoin";
                    tooltip = "Connect to the Backup TAS Teamspeak Server";
                    y = "(8 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    url = "ts3server://###.###.###.###?port=9987&password=######";
                    //onbuttonclick = "connectToServer ['###.###.###.###', 2302, '']";
                };*/
            };
        };
    };
};

class CfgMainMenuSpotlight: RscStandardDisplay // RscDisplayMain >> Spotlight works but is considered obsolete since SPOTREP #00064
{
	/*class CoopCampaign
	{
		text = "Coop Campaign"; // Text displayed on the square button, converted to upper-case
		textIsQuote = 1; // 1 to add quotation marks around the text
		picture = "\a3\Ui_f\Data\GUI\Rsc\RscDisplayMain\spotlight_1_apex_ca.paa"; // Square picture, ideally 512x512
		video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover
		action = "ctrlactivate ((ctrlparent (_this select 0)) displayctrl 101);"; // Code called upon clicking, passed arguments are [<button:Control>]
		actionText = $STR_A3_RscDisplayMain_Spotlight_Play; // Text displayed in top left corner of on-hover white frame
		condition = "true"; // Condition for showing the spotlight
	};
	class AnotherCoopCampaign
	{
		text = "Another Coop Campaign";
		picture = "\a3\Ui_f\Data\GUI\Rsc\RscDisplayMain\spotlight_1_eastwind_ca.paa";
		action = "ctrlactivate ((ctrlparent (_this select 0)) displayctrl 149);";
		actionText = $STR_A3_RscDisplayMain_Spotlight_Play;
		condition = "isKeyActive 'FinishedCoopCampaign';";
	};*/
	/*class JoinTasServer
	{
		text = "Join TAS Arma Server";
		picture = "my_mod\data\spotlight.paa";
		action = "connectToServer ['127.0.0.1', 2302, '']";
		actionText = "Join the Splendid Server";
		condition = "true";
	};*/
    class JoinTasServer {
        text = "TAS Arma Server";
        //text = "Connect to<br />TAS Arma Server";
        //picture = "Autismo_Seals_Unit_Mod\logo.paa";
        picture = "\Autismo_Seals_Unit_Mod\addons\TAS_Quickjoin\media\logo.paa";
        action = "0 = [_this, 'arma.d404.nl', '2302', 'cheese'] execVM '\Autismo_Seals_Unit_Mod\addons\TAS_Quickjoin\scripts\joinServerFullRpt.sqf';";
        //action = "connectToServer ['####.####.####', 2302, '######']"; //Cat: ###.###.###.###, tbone: ###.###.###.###
        actionText = "You should connect to it... NOW";
        condition = "true";
    };
    /*class JoinTasTeamspeak {
        text = "Connect to TAS Teamspeak Server";
        //text = "Connect to<br />TAS Teamspeak Server";
        //picture = "Autismo_Seals_Unit_Mod\logo.paa";
        picture = "\Autismo_Seals_Unit_Mod\addons\TAS_Quickjoin\media\logo.paa";
        //action = "(_this select 1) ctrlSetURL 'http://arma3.com/';";
        actionText = "Connect to the Main TAS Teamspeak Server";
        url = "ts3server://####.####.####?port=9987&password=######";
        condition = "true";
        //_ctrlMenuStrip menuSetURL [[0,0,1], "https://arma3.com/"];
        //(_this select 1) ctrlSetURL "http://arma3.com/";
        //onbuttonclick = "connectToServer ['###.###.###.###', 2302, '']";
    };*/
    /*class JoinGuacServer {
        text = "Connect to TAS Backup Arma Server";
        //text = "Connect to<br />TAS Backup<br />Arma Server";
        //picture = "Autismo_Seals_Unit_Mod\logo.paa";
        picture = "\Autismo_Seals_Unit_Mod\addons\TAS_Quickjoin\media\logo.paa";
        //action = "connectToServer ['###.###.###.###', 2302, '######']";
        action = "0 = [_this, '###.###.###.###', '2302', '######'] execVM '\Autismo_Seals_Unit_Mod\addons\TAS_Quickjoin\scripts\joinServer.sqf';";
        //action = "0 = [_this, '127.0.0.1', '2302', '######'] execVM '\Autismo_Seals_Unit_Mod\addons\TAS_Quickjoin\scripts\joinServer.sqf';";
        actionText = "Connect to the Backup TAS Arma Server. Scroll downwards for the backup Teamspeak quickjoin.";
        condition = "true";
        //onbuttonclick = "connectToServer ['###.###.###.###', 2302, '']";
    };*/
    /*class JoinGuacTeamspeak {
        text = "Connect to TAS Backup Teamspeak Server";
        //text = "Connect to<br />TAS Backup<br />Teamspeak Server";
        //picture = "Autismo_Seals_Unit_Mod\logo.paa";
        picture = "\Autismo_Seals_Unit_Mod\addons\TAS_Quickjoin\media\logo.paa";
        //action = "connectToServer ['127.0.0.1', 2302, '']";
        actionText = "Connect to the Backup TAS Teamspeak Server";
        //url = "ts3server://###.###.###.###?port=9987&password=######";
        url = "http://arma3.com/";
        condition = "true";
        //onbuttonclick = "connectToServer ['###.###.###.###', 2302, '']";
    };*/
};