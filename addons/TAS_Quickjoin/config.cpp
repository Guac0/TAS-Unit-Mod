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
                class JoinTasServer: ServerBrowser {
                    idc = -1;
                    text = "TAS Server Quickjoin";
                    tooltip = "Connect to the TAS Main Server";
                    y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['***REMOVED***', 2302, '']";
                };
                class JoinGuacServer: ServerBrowser {
                    idc = -1;
                    text = "TAS Primary Backup Server Quickjoin";
                    tooltip = "Connect to the TAS Primary Backup Server";
                    y = "(4 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['***REMOVED***', 2302, '']";
                };
            };
        };
    };
};