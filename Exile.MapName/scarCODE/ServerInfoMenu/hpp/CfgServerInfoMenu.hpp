class CfgServerInfoMenu
{
   addAction = 1; // Enable/disable action menu item | use 0 to disable | default: 1 (enabled)
   antiHACK = "infiSTAR + BattlEye";
   hostedBy = "GamerClanName";
   ipPort = "000.123.456.789:2302";
   openKey = "User7"; // https://community.bistudio.com/wiki/inputAction/actions
   openAtLogin = yes;
   restart = 3; // Amount of hours before server automatically restarts
   serverName = "Name of this server";
   class menuItems
   {

      class first
      {
         menuName = "General";
         title = "GENERAL INFORMATION";
         content[] = {
            "This is some placeholder text"
         };
      };
      class second
      {
         menuName = "Rules";
         title = "SERVER RULES";
         content[] = {
            "<t size='1.75'>Rule #1</t><br />Players/admins are NOT permitted to show racism, profanity and disrespect towards any other player/admin in this server.<br />",
            "<t size='1.75'>Rule #2</t><br />No voice transmission over side chat. Adjust your control settings to prevent doing it by accident.<br />"
         };
      };
      class third
      {
         menuName = "Crafting";
         title = "CRAFTING GUIDE";
         content[] = {""};
      };
      class fourth
      {
         menuName = "Admins";
         title = "ADMINISTRATORS";
         content[] = {""};
      };
      class fifth
      {
         menuName = "Scripts";
         title = "INSTALLED SCRIPTS";
         content[] = {""};
      };
      class sixth
      {
         menuName = "Communication";
         title = "VOICE SERVER AND WEBSITE";
         content[] = {
            "<t size='1.25'>TeamSpeak:</t> ts.website.com",
            "<br />",
            "<t size='1.25'>Website:</t> https://website.com"
         };
      };
      class seventh
      {
         menuName = "Credits";
         title = "CREDITS WHERE CREDITS DUE";
         content[] = {
            "<t size='1.25'>IT07:</t> coder/creator of this menu",
            "<br />",
            "<t size='1.25'>Name:</t> blablabla"
         };
      };
   };
};
