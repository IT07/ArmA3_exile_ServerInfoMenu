/*
   Author: IT07

   Description:
   does whatever is needed to initialize the ServerInfoMenu
*/

if hasInterface then
{
   waitUntil { if (not(isNull(findDisplay 46)) AND typeOf player isEqualTo "Exile_Unit_Player") then { true } else { uiSleep 0.5; false } };
   player addAction ["<img size='1.25' image='\a3\ui_f\data\Map\VehicleIcons\iconVirtual_ca.paa' />   Server Info Menu","createDialog'RscDisplayServerInfoMenu'","",-1,false,true,getText(missionConfigFile >> "CfgServerInfoMenu" >> "openKey"),"alive player"];
};
