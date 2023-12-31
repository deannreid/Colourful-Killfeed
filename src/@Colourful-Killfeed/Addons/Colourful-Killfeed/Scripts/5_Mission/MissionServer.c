 /*
 * Colourful UI - Killfeed Addon
 * Developed by @Dean Reid
 *
 * Class: missionServer.c
 *  
 * Class Information:
 *
 * Class handles serverside bits
 * 
 * Program Version: 1.0
 * Code Version: 1.0
 * 
 * Updates: 
 * 06/03/2022 - Initial Code Development
 */
modded class MissionServer {
	
	ref CUIConfig cuiConfig;
	string configDir;
	string permissionDir;
	
	void MissionServer() {
		
    }
	
	override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity) {
		Print("[CUI - missionServer] :: Plugin InvokeOnConnect!");
        super.InvokeOnConnect(player, identity);
		if (!player) { return; }
		
        //auto configParams = new Param1<PNSConfig>(GetDayZGame().GetPNSConfig());
		//GetGame().RPCSingleParam(player, PNSRPC.RPC_CLIENT_SETCONFIG, configParams, true, identity);
		Print("[CUI - ConfigManager] :: Parameter: " + configParams + " Found");
    }
	
	private void SavePNSConfig() {
        //JsonFileLoader<PNSConfig>.JsonSaveFile(configDir, cuiConfig);
		Print("[CUI - ConfigManager] :: File " + configDir+pnsConfig + " Created");
    }

    private void LoadPNSConfig() {
        //JsonFileLoader<PNSConfig>.JsonLoadFile(configDir, cuiConfig);
		Print("[CUI - ConfigManager] :: File " + configDir+cuiConfig + " Loaded");
        //pnsConfig.ValidateOptions();
    }
}