/*
 * Colourful UI - Killfeed Addon
 * Developed by @Dean Reid
 *
 * Class: KFDVisualiser.c
 *  
 * Class Information:
 *
 * Class handles Userside Mission.
 * 
 * Program Version: 1.0
 * Code Version: 1.0
 * 
 * Updates: 
 * 31/12/2023 - Initial Code Development
 */
		//		data.param1, // Killer Group
		//		data.param2, // Killer Name
		//		data.param3, // Victim Group
		//		data.param4, // Victim Name
		//		data.param5, // Weapon Name \ Death Type
		//		data.param6, // Distance

class KFHandler : PluginBase {

	private ref array<ref KillType> KillFeedWording;
	
	void KFHandler() {
		LoadWording();
	}

	void LoadWording() {
	
		// Load Custom Wording from CFG File
	
	}
	
	void OnPlayerKilled(PlayerBase vtm = null, PlayerBase klr = null, EntityAI dthType = null, int deathType) {
		KillFeedWording dthType = GetDeathConfigByType(deathType);
		
		string KFMsg;
		int dthTyp;
		
		if (dthType.GetType() == "") {
			type = 1;
		} else if (dthType.IsActive()) {
			KFMsg = dthType.GetWording;
		} else {
			return;
		}
			SendKFInfo(vtm, klr, dthType, KFMsg);
		
		//PlayerDeathEventTypeID
	}
}