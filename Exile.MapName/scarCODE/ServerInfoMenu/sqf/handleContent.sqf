disableSerialization;
_dsp = uiNamespace getVariable ["RscDisplayServerInfoMenu", displayNull];
if not isNull _dsp then
{
   _ctrlMenu = _dsp displayCtrl 7;
   _className = _ctrlMenu lbData (lbCurSel _ctrlMenu);
   _ctrlContentTitle = _dsp displayCtrl 8;
   _ctrlContentTitle ctrlSetText getText (missionConfigFile >> "CfgServerInfoMenu" >> "menuItems" >> _className >> "title");
   _ctrlContent = _dsp displayCtrl 9;
   _ctrlContent ctrlSetStructuredText parseText "";
   _contentArray = getArray (missionConfigFile >> "CfgServerInfoMenu" >> "menuItems" >> _className >> "content");
   _content = "";
   { // Build the content
      _content = _content + _x;
   } forEach _contentArray;
   _ctrlContent ctrlSetStructuredText parseText _content;
   _ctrlContentPos = ctrlPosition _ctrlContent;
   _ctrlContent ctrlSetPosition [_ctrlContentPos select 0, _ctrlContentPos select 1, _ctrlContentPos select 2, ctrlTextHeight _ctrlContent];
   _ctrlContent ctrlCommit 0.25;
} else { systemChat "handleContent: isNull _dsp" };
