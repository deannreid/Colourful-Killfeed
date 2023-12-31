/*
 * Colourful UI - Killfeed Addon
 * Developed by @Dean Reid
 *
 * Class: KillfeedStuff.c
 *  
 * Class Information:
 *
 * Class handles KF stuff
 * 
 * Program Version: 1.0
 * Code Version: 1.0
 * 
 * Updates: 
 * 31/12/2023 - Initial Code Development
 */

class KillfeedStuff { 

	// Killer/Victim Stuff
	string killerName = ""; // Name of the killer
	string killerGroup = ""; // Group Tag of the killer (To support expansion/LB)
	
	string victimName = ""; // Name of the Victim
	string victimGroup = ""; // Group Tag of the victim (To support expansion/LB)
	
	string killerItemClassname = ""; // Itemname of the weapon used
	ref TStringArray attachments = new ref TStringArray(); //Attachments attached to the Item

	int distance = -1; // distance between killer and victim
	
	
	// KF Settings
	int duration = 10; // Duration this message will be shown on the graphical killfeed
	
	bool victimAI = false; // 0 = victim is a AI. 1 = normal player.
	bool killerAI = false; // 0 = killer is a AI. 1 = normal player.
	
	vector victimPosition; // Position of the victim
	vector killerPosition; // Position of the killer
	
}