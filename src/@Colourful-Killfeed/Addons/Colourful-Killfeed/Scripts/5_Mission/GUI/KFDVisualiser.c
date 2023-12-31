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

class KFDVisualiser {

	private Widget KFDRoot;
	private ref array<ref KillFeedStuff> kfdStuff;
	
	//init wrapper
	void KFDVisualiser() {
		KFDRoot = GetGame().GetWorkspace().CreateWidgets("Colourful-Killfeed/Assets/Layout/wrapper.layout", null);
		kfdStuff = new array<ref KillFeedStuff>();
	}
	
	// get root widget
	Widget GetRoot() {
		return KFDRoot;
	}
	
	// Add Stuff (Killer Group, Killer Name, Victim Group, Victim Name, Weapon Name/Death Type, Distance to array
	void AddItem(Param6<string, string, string, string, string, int> data) {
	
		kfdStuff.Insert (
			new KillFeedStuff(
				this, 
				data.param1, // Killer Group
				data.param2, // Killer Name
				data.param3, // Victim Group
				data.param4, // Victim Name
				data.param5, // Weapon Name \ Death Type
				data.param6, // Distance
				)
			);
	}
	
	// Remove Item from Array
	void RemoveItem (KillFeedStuff stuff) {
	
		int itm = kfdStuff.Find(stuff);
		if (itm + 1) {
			kfdStuff.Remove(itm);
		}
	}
}
