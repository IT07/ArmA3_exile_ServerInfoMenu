/*
   Author: IT07

   Description:
   does whatever is needed to initialize the ServerInfoMenu
*/

if hasInterface then
{
   waitUntil { if (not(isNull(findDisplay 46)) AND typeOf player isEqualTo "Exile_Unit_Player") then { true } else { uiSleep 0.5; false } };
   player addAction ["<t size='1.25'>Server Info Menu</t>","createDialog'RscDisplayServerInfoMenu'"];
};
