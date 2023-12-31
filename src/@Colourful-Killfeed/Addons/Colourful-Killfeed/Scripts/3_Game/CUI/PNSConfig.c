/*
 * Colourful UI - Killfeed Addon
 * Developed by @Dean Reid
 *
 * Class: playerconstants.c
 *  
 * Class Information:
 *
 * Class handles Player Constants
 * 
 * Program Version: 1.0
 * Code Version: 1.0
 * 
 * Updates: 
 * 15/03/2023 - Initial Code Development
 * 06/09/2023 - Changed Int to Float
 */

class CUIConfig {
	/*
	* Game Booleans
	*/

	/*
	* Game Floats
	*/	

	/*
	* Server Booleans
	*/	
	private string CUI_EnableLogging; // Enable Server Logging
	
	void CUIConfig() {
	
		private static ref CUIConfig cuiConfig = NULL;
	
		//GB

		//GF

		//SB
		CUI_EnableLogging = "true";
	}
	
	float GetConfigReloadTime() {
        return PermissionReloadTime;
    }

	bool CUI_EnableLogging() {
	    string cuiString = CUI_EnableLogging;
        cuiString.ToLower();

        return cuiString == "true";
	}	
	
	void ValidateOptions() {
		Print("[CUI - ConfigManager] :: Validating Configuration Entries");

		//Enable Logging Validation
		if (CUI_EnableLogging == string.Empty) {
	            CUI_EnableLogging = "true";
				Print("[CUIConfig] :: String {{CUI_EnableLogging}} is empty!!! | Setting it to Default " + CUI_EnableLogging);
	    }			


		Print("[CUI - ConfigManager] :: Validated Configuration Entries");	
	}	
}