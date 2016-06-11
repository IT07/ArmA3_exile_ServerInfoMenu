class RscDisplayServerInfoMenu
{
   idd = 7770;
   onKeyDown = "if (_this select 1 isEqualTo 0x01) then { [] ExecVM 'scarCODE\ServerInfoMenu\sqf\onEscape.sqf' }; true";
   onLoad = "uiNamespace setVariable ['RscDisplayServerInfoMenu', _this select 0]; [] ExecVM 'scarCODE\ServerInfoMenu\sqf\onLoad.sqf'; playSound ['ZoomIn', true]; 'DynamicBlur' ppEffectEnable true; 'DynamicBlur' ppEffectAdjust [7]; 'DynamicBlur' ppEffectCommit 0.1";
   onUnLoad = "uiNamespace setVariable ['RscDisplayServerInfoMenu', displayNull]; playSound ['ZoomOut', true]; 'DynamicBlur' ppEffectAdjust [0]; 'DynamicBlur' ppEffectCommit 0.1";
   movingEnable = 1;
   #define GUI_GRID_X	(0)
   #define GUI_GRID_Y	(0)
   #define GUI_GRID_W	(0.025)
   #define GUI_GRID_H	(0.04)
   #define GUI_GRID_WAbs	(1)
   #define GUI_GRID_HAbs	(1)
   class RscBackground
   {
      access = 0;
      colorBackground[] = {0,0,0,0.85};
      colorShadow[] = {0,0,0,0.5};
      colorText[] = {0.1,0.1,0.1,1};
      deletable = 0;
      fade = 1;
      fixedWidth = 0;
      font = "PuristaLight";
      idc = -1;
      linespacing = 1;
      shadow = 0;
      sizeEx = 1;
      style = 512;
      text = "";
      tooltipColorBox[] = {1,1,1,1};
      tooltipColorShade[] = {0,0,0,0.65};
      tooltipColorText[] = {1,1,1,1};
      type = 0;
   };
   class RscControlsGroupNoHscroll
   {
      deletable = 0;
      fade = 1;
      idc = -1;
      shadow = 0;
      style = 16;
      type = 15;

      class HScrollbar
      {
         arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
         arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
         autoScrollDelay = 5;
         autoScrollEnabled = 0;
         autoScrollRewind = 0;
         autoScrollSpeed = -1;
         border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
         color[] = {1,1,1,1};
         colorActive[] = {1,1,1,1};
         colorDisabled[] = {1,1,1,0.3};
         height = 0;
         scrollSpeed = 0.06;
         shadow = 0;
         thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
         width = 0;
      };
      class VScrollbar
      {
         arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
         arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
         autoScrollDelay = 5;
         autoScrollEnabled = 1;
         autoScrollRewind = 0;
         autoScrollSpeed = -1;
         border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
         color[] = {1,1,1,1};
         colorActive[] = {1,1,1,1};
         colorDisabled[] = {1,1,1,0.3};
         height = 0;
         scrollSpeed = 0.06;
         shadow = 0;
         thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
         width = 0.021;
      };
   };
   class RscStructuredText
   {
      access = 0;
      colorText[] = {1,1,1,1};
      deletable = 0;
      fade = 1;
      idc = -1;
      shadow = 1;
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
      style = 0;
      text = "";
      type = 13;
   };
   class RscText
   {
      access = 0;
      colorBackground[] = {0,0,0,0};
      colorShadow[] = {0,0,0,0.5};
      colorText[] = {1,1,1,1};
      deletable = 0;
      fade = 1;
      fixedWidth = 0;
      font = "RobotoCondensed";
      idc = -1;
      linespacing = 1;
      shadow = 1;
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
      style = 0;
      text = "";
      tooltipColorBox[] = {1,1,1,0.1};
      tooltipColorShade[] = {0,0,0,0.65};
      tooltipColorText[] = {1,1,1,0.9};
      type = 0;
   };
   class RscListBox
   {
      access = 0;
      arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
      arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
      autoScrollDelay = 5;
      autoScrollRewind = 0;
      autoScrollSpeed = -1;
      colorBackground[] = {0,0,0,0};
      colorDisabled[] = {1,1,1,0.25};
      colorPicture[] = {1,1,1,1};
      colorPictureDisabled[] = {1,1,1,0.25};
      colorPictureRight[] = {1,1,1,1};
      colorPictureRightDisabled[] = {1,1,1,0.25};
      colorPictureRightSelected[] = {1,1,1,1};
      colorPictureSelected[] = {1,1,1,1};
      colorScrollbar[] = {1,0,0,0};
      colorSelect2[] = {0,0,0,1};
      colorSelect2Right[] = {0,0,0,1};
      colorSelect[] = {0,0,0,1};
      colorSelectBackground2[] = {1,1,1,0.5};
      colorSelectBackground[] = {0.95,0.95,0.95,1};
      colorSelectRight[] = {0,0,0,1};
      colorShadow[] = {0,0,0,0.5};
      colorText[] = {1,1,1,1};
      colorTextRight[] = {1,1,1,1};
      deletable = 0;
      fade = 1;
      font = "PuristaMedium";
      maxHistoryDelay = 1;
      period = 1.2;
      rowHeight = 0;
      shadow = 0;
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
      soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
      style = 16;
      tooltipColorBox[] = {1,1,1,1};
      tooltipColorShade[] = {0,0,0,0.65};
      tooltipColorText[] = {1,1,1,1};
      type = 5;
   };
   class controls
   {
      class serverTitle:RscText
      {
         x = 0 * GUI_GRID_W + GUI_GRID_X;
      	y = 0 * GUI_GRID_H + GUI_GRID_Y;
      	w = 40 * GUI_GRID_W;
      	h = 2 * GUI_GRID_H;

         colorBackground[] = {0,0,0,0.85};
         colorText[] = {1,1,1,0.95};
         font = "PuristaBold";
         idc = 0;
         sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2)";
      };
      class serverAddress:RscText
      {
         x = 0 * GUI_GRID_W + GUI_GRID_X;
      	y = 2.1 * GUI_GRID_H + GUI_GRID_Y;
      	w = 13 * GUI_GRID_W;
      	h = 1.5 * GUI_GRID_H;

         colorBackground[] = {0,0,0,0.85};
         colorText[] = {1,1,1,0.95};
         font = "PuristaLight";
         idc = 1;
         sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.25)";
      };
      class serverUptime:RscText
      {
         x = 13.14 * GUI_GRID_W + GUI_GRID_X;
      	y = 2.1 * GUI_GRID_H + GUI_GRID_Y;
      	w = 5 * GUI_GRID_W;
      	h = 1.5 * GUI_GRID_H;

         colorBackground[] = {0,0,0,0.85};
         colorText[] = {1,1,1,0.95};
         font = "PuristaLight";
         idc = 2;
         sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
         toolTip = "Server uptime (h = hours, m = minutes)";
      };
      class allPlayers:RscText
      {
         x = 18.25 * GUI_GRID_W + GUI_GRID_X;
      	y = 2.1 * GUI_GRID_H + GUI_GRID_Y;
      	w = 3 * GUI_GRID_W;
      	h = 1.5 * GUI_GRID_H;

         colorBackground[] = {0,0,0,0.85};
         colorText[] = {1,1,1,0.95};
         font = "PuristaLight";
         idc = 3;
         sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
         toolTip = "Players online";
      };
      class restartSchedule:RscText
      {
         x = 21.35 * GUI_GRID_W + GUI_GRID_X;
      	y = 2.1 * GUI_GRID_H + GUI_GRID_Y;
      	w = 18.65 * GUI_GRID_W;
      	h = 1.5 * GUI_GRID_H;

         colorBackground[] = {0,0,0,0.85};
         colorText[] = {1,1,1,0.95};
         font = "PuristaMedium";
         idc = 4;
         sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.25)";
      };
      class hostedBy:RscText
      {
         x = 0 * GUI_GRID_W + GUI_GRID_X;
      	y = 3.7 * GUI_GRID_H + GUI_GRID_Y;
      	w = 17.65 * GUI_GRID_W;
      	h = 1.5 * GUI_GRID_H;

         colorBackground[] = {0,0,0,0.85};
         colorText[] = {1,1,1,0.95};
         font = "PuristaBold";
         idc = 5;
         sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
      };
      class antiHACK:RscText
      {
         x = 17.75 * GUI_GRID_W + GUI_GRID_X;
      	y = 3.7 * GUI_GRID_H + GUI_GRID_Y;
      	w = 22.25 * GUI_GRID_W;
      	h = 1.5 * GUI_GRID_H;

         colorBackground[] = {0,0,0,0.85};
         colorText[] = {1,1,1,0.95};
         font = "PuristaLight";
         idc = 6;
         sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.15)";
      };
      class bgMenu:RscBackground
      {
         x = 0 * GUI_GRID_W + GUI_GRID_X;
         y = 6.85 * GUI_GRID_H + GUI_GRID_Y;
         w = 9 * GUI_GRID_W;
         h = 15 * GUI_GRID_H;
      };
      class menuTitle:RscText
      {
         x = 0 * GUI_GRID_W + GUI_GRID_X;
         y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
         w = 9 * GUI_GRID_W;
         h = 1.25 * GUI_GRID_H;

         colorBackground[] = {0,0.635,1,0.8};
         colorText[] = {1,1,1,0.95};
         font = "PuristaLight";
         idc = -1;
         shadow = 0;
         sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.35)";
         text = "MENU";
      };
      class menu:RscListbox
      {
         class ListScrollBar
         {
            arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
            arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
            autoScrollDelay = 5;
            autoScrollEnabled = 0;
            autoScrollRewind = 0;
            autoScrollSpeed = -1;
            border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
            color[] = {1,1,1,1};
            colorActive[] = {1,1,1,1};
            colorDisabled[] = {1,1,1,0.3};
            height = 0;
            scrollSpeed = 0.06;
            shadow = 0;
            thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
            width = 0;
         };

         x = 0 * GUI_GRID_W + GUI_GRID_X;
      	y = 7 * GUI_GRID_H + GUI_GRID_Y;
      	w = 9 * GUI_GRID_W;
      	h = 10 * GUI_GRID_H;

         idc = 7;
         onLBSelChanged = "[] ExecVM 'scarCODE\ServerInfoMenu\sqf\handleContent.sqf'";
      };
      class contentTitle:RscText
      {
         x = 9.15 * GUI_GRID_W + GUI_GRID_X;
         y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
         w = 30.85 * GUI_GRID_W;
         h = 1.25 * GUI_GRID_H;

         colorBackground[] = {0,0.635,1,0.8};
         colorText[] = {1,1,1,0.95};
         font = "PuristaLight";
         idc = 8;
         shadow = 0;
         sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.35)";
      };
      class bgContent:RscBackground
      {
         x = 9.15 * GUI_GRID_W + GUI_GRID_X;
         y = 6.85 * GUI_GRID_H + GUI_GRID_Y;
         w = 30.85 * GUI_GRID_W;
         h = 15 * GUI_GRID_H;
      };
      class grpContent:RscControlsGroupNoHscroll
      {
         x = 9.15 * GUI_GRID_W + GUI_GRID_X;
         y = 6.85 * GUI_GRID_H + GUI_GRID_Y;
         w = 30.85 * GUI_GRID_W;
         h = 15 * GUI_GRID_H;

         class Controls
         {
            class structuredContent:RscStructuredText
            {
               x = 0 * GUI_GRID_W + GUI_GRID_X;
               y = 0.25 * GUI_GRID_H + GUI_GRID_Y;
               w = 30.85 * GUI_GRID_W;
               h = 0 * GUI_GRID_H;

               idc = 9;
            };
         };
      };
   };
};
