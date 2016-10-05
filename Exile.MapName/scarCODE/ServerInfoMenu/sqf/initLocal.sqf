/*
   Author: IT07

   Description:
   does whatever is needed to initialize the ServerInfoMenu
*/

if hasInterface then
   {
      if isMultiplayer then
         {
            waitUntil { if ( not ( isNull ( findDisplay 46 ) ) AND ( ( typeOf player ) isEqualTo "Exile_Unit_Player" ) ) then { true } else { uiSleep 0.5; false } };
            if ( getText ( missionConfigFile >> "CfgServerInfoMenu" >> "openAtLogin" ) isEqualTo "yes" ) then { createDialog "RscDisplayServerInfoMenu" };
         } else
            {
               waitUntil { if not ( isNull ( findDisplay 46 ) ) then { true } else { uiSleep 0.5; false } };
               if ( getText ( missionConfigFile >> "CfgServerInfoMenu" >> "openAtLogin" ) isEqualTo "yes" ) then { createDialog "RscDisplayServerInfoMenu" };
            };

      while { true } do
         {
            if ( getNumber ( missionConfigFile >> "CfgServerInfoMenu" >> "addAction" ) isEqualTo 1 ) then
               {
                  _player = player;
                  _action = _player addAction [ "<img size='1.25' image='\a3\ui_f\data\Map\VehicleIcons\iconVirtual_ca.paa' />   Server Info Menu", "createDialog'RscDisplayServerInfoMenu'", "", -1, false, true, getText ( missionConfigFile >> "CfgServerInfoMenu" >> "openKey" ), "alive player" ];
                  waitUntil { if not ( alive player ) then { _player removeAction _action; true } else { uiSleep 2; false } };
                  waitUntil { if not( _player isEqualTo player ) then { true } else { uiSleep 2; false } };
                  uiSleep 1;
               } else
                  {
                     _openKey = getText(missionConfigFile >> "CfgServerInfoMenu" >> "openKey");
                     while {true} do
                        {
                           if (inputAction _openKey > 0) then { createDialog "RscDisplayServerInfoMenu"
                              } else { uiSleep 0.01 };
                        };
                  };
         };
   };
