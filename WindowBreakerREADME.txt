=====================================
Window Breaker
Version: 1.3
Release date: 2018-NOV-30
Author: Axebeard
Multiplayer compatible: Yes, client side only
=====================================

An unofficial addon for the PC game "Arma III" by Bohemia Interactive.

=====================================
DESCRIPTION
=====================================

Allows you bind a custom key using CBA to smash windows open with a weapon.

Requires you to:
-Be standing
-Be holding a rifle or handgun
-Be conscious
-Be not captive
-Be alive
-Be within arms reach (1.75 meters from a height of 1.2m from the palyer's feet) of your target

May not work with custom buildings (but let me know!).

=====================================
REQUIREMENTS
=====================================

CBA_A3 - 3.8.0 - CBA Team
 
=====================================
INSTALLATION
=====================================

Steam workshop - Automatically installed. Turn on in launcher
---
Use of a mod folder isn't recommended unless you know what you're doing (MODFOLDER in the following examples).
Extract the supplied files into a folder such as "ArmA3/MODFOLDER/Addons".
Start the game using the -mod=MODFOLDER parameter.
For more information, please refer to http://community.bistudio.com/wiki/Modfolders

=====================================
TECHNICAL DETAILS
=====================================

Uses CBA custom keybind and settings. 
Check CBA wiki for help.

How it works:
Based on a script found on Armaholic, the script identifies all hitpoints with an armor level < 0.5 in the closest building to the player.

If the player isn't holding a rifle or pistol, the script exits.

If there is a hitpoint within 1.75m of the player, they're standing up and not dead, and it hasn't been completely broken already, the script checks which weapon they're holding.

If holding a rifle, the player's animation speed is cranked up to 2x, it adjusts the timing of the animation and glass breaking sounds, and deals damage to the hitpoint (window).

If not holding a rifle, it does the pistol knockout animation.

After playing the animations, the player's animation speed is reset to 1x.
 
=====================================
KNOWN ISSUES
=====================================
 
-Distance measurement is currently based on player's position +Z 1.2 (about chest height) and the origin point of the glass, which for some windows might be over the player's head.

-Some groups of windows (like Takistan's barracks windows) have their origin on the middle window.

-Altis church windows are too high to break with default settings.

-Breaking glass sound is centered on player.

-Wonky vanilla animations.

-Glass doors will probably break if you use the same key to open them that you use for Window Breaker (I use Space).

-Multiplied glass noises if you jam the button rapidly.

=====================================
VERSION HISTORY
=====================================

1.0 - Initial release
1.2 - Includes BiKey (thanks to The Hero)
1.3 - PlaySound3d set correctly (distance 30m) so no more global glass sounds (thanks to Coryf88)

=====================================
LICENSE
=====================================

Window Breaker Copyright (c) 2018 by Axebeard. This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/3.0/ or send a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA. 

Do whatever you want with it, it's a friggin' free mod for a video game. I don't care what you do with this and please DO NOT ask me for permission to add to a modpack or alter the script. I really couldn't care less. Just don't sell it.

=====================================
CREDITS
=====================================
 
Axebeard (Axebeard#5723 on Discord)

The Arma 3 Discord for help