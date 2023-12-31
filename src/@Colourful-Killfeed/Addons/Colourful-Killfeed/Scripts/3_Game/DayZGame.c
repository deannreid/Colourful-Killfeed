/*
 * Colourful UI - Killfeed Addon
 * Developed by @Dean Reid
 *
 * Class: DayZGame.c
 *  
 * Class Information:
 *
 * Class handles config stuff
 * 
 * Program Version: 1.0
 * Code Version: 1.0
 * 
 * Updates: 
 * 31/12/2023 - Initial Code Development
 */

modded class DayZGame {
	
	protected ref CUIConfig cuiConfig;
	
    void SetCUIConfig(CUIConfig config) {
        cuiConfig = config;
		Print("SetCUIConfig: " + config );
    }
	
	ref CUIConfig GetCUIConfig() {
        return cuiConfig;
		Print("GetCUIConfig: " + cuiConfig );
    }	
}