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

class KFDMessage {

	private Widget KFDRoot;
	private Widget background;
	
	private TextWidget deathType;
	private TextWidget dist;
	
	private ImageWidget killTypeIco;
	
	private TextWidget killerGrp;
	private TextWidget killerNme;
	
	private TextWidget victimGrp;
	private TextWidget victimNme;
	
	private ref KFDVisualiser parent;
	
	private EntityAI weaponLCL;

	void KFDMessage( KFDVisualiser daddy, String klrGrp, string klrNme, string vtmGrp, string vtmNme, string dthType, int dst, ) {
		// Find Layout Element
		parent = daddy; 
		
		KFDRoot = GetGame().GetWorkspace().CreateWidgets("Colourful-Killfeed/Assets/Layout/kfentry.layout", null);
		
		killerGrp 	= TextWidget.Cast(KFDRoot.FindAnyWidget("killerGroup"));
		killerNme 	= TextWidget.Cast(KFDRoot.FindAnyWidget("killerName")); 
		
		victimGrp 	= TextWidget.Cast(KFDRoot.FindAnyWidget("victimGroup"));
		victimNme 	= TextWidget.Cast(KFDRoot.FindAnyWidget("victimName")); 
		
		deathType = TextWidget.Cast(KFDRoot.FindAnyWidget("weaponName")); 
		
		dist 	= TextWidget.Cast(KFDRoot.FindAnyWidget("killDistance"));
		
		// Change Text on Layout
		
		killerGrp.SetText(FormatName(klrGrp));
		killerNme.SetText(FormatName(klrNme));
		
		victimGrp.SetText(FormatName(vtmGrp));
		victimNme.SetText(FormatName(vtmNme));
		
		deathType.SetText(FormatName(dthType));
		
		dist.SetText(FormatName(dst));
		
		backGrnd = KFDRoot.FindAnyWidget("background");
		float width, height;
		width = GetFKWidth();
		backGrnd.GetSize(null, height);
		backGrnd.GetSize(null, width);
		
		GetGame().GetCallQueue()(CALL_CATEGORY_GUI).CallLater(this.Destroy, 1000, false);
		
	}
	
	string FormatName(string source) {
		string result = source;
		if (result.Length() > 16)
			result = result.Substring(0, 12) + "...";
		return result;
	}		
	
	void Destroy() {
		GetFKWidth();
		daddy.RemoveItem(this);
		KFDRoot.Unlink();
		if (dthType) {
			GetGame().ObjectDelete(dthType); 
		}
	}
	
	float GetFKWidth() {
		float start, end, width;
		killerGrp.GetPos(null, start);
		victimNme.GetPos(null, end);
		victimNme.GetSize(width, null);
		width = start + end + width;

		Print("[CUI - KFD Debug] ::  Wdth "+width);
		Print("[CUI - KFD Debug] ::  Wdth start "+start);
		Print("[CUI - KFD Debug] ::  Wdth end "+end);
		return width;
	}
}