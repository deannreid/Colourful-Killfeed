/*
 * Colourful UI - Killfeed Addon
 * Developed by @Dean Reid
 *
 * Class: config.cpp
 *  
 * Class Information:
 *
 * Class handels configuration for mod.
 * 
 * Program Version: 1.0
 * Code Version: 1.0
 * 
 * Updates: 
 * 30/12/2023 - Initial Code Development
 */
class CfgPatches {
	class Colourful-Killfeed {
		requiredVersion=0.1;
		requiredAddons[]= {	"DZ_Data", "DZ_Scripts" };
	};
};

class CfgMods {
	class Colourful-Killfeed {
		dir="Colourful-Killfeed";
		type="mod";
		picture="Colourful-Killfeed\Assets\Images\logo\logoOpaque.edds";
		logoSmall="Colourful-Killfeed\Assets\Images\logo\logoOpaque.edds";
		logo="Colourful-Killfeed\Assets\Images\logo\logoOpaque.edds";
		logoOver="Colourful-Killfeed\Assets\Images\logo\logoOpaque.edds";
		tooltip="Colourful UI - Killfeed";
		overview="A killfeed addon mod for the Colourful UI range";
		action="";
		author="BigDeano";
		inputs="Colourful-Killfeed/Scripts/Data/CUIKeybinds.xml";
		dependencies[]= { "World", "Mission" };
		class defs {
			class imageSets {
				files[]= { "Colourful-Killfeed\Assets\Imagesets\PNS_UI.imageset" };
			}
			class coreScriptModule {
                value = "";
                files[] = { "Colourful-Killfeed/Scripts/1_Core"	};
            };
			class gameScriptModule {
				value="";
				files[]= { "Colourful-Killfeed/Scripts/3_Game" };
			};
			class worldScriptModule {
				value="";
				files[]= { "Colourful-Killfeed/Scripts/4_World" };
			};
			class missionScriptModule {
				value="";
				files[]= { "Colourful-Killfeed/Scripts/5_Mission" };
			};
		};
	};
};