/*
 * Colourful UI - Killfeed Addon
 * Developed by @Dean Reid
 *
 * Class: CUI RPC.c
 *  
 * Class Information:
 *
 * Class handles RPC Stuff
 * 
 * Program Version: 1.0
 * Code Version: 1.0
 * 
 * Updates: 
 * 06/03/2022 - Initial Code Development
 */

enum CUIRPC {
    CUIRPC_START = 29462906720,
	
	// Server RPC's
	RPC_SERVER_ADMINMENU,
	
    // Client RPC's
	RPC_CLIENT_SHOWMENU,
    RPC_CLIENT_HANDLEUI,
    RPC_CLIENT_SETCONFIG
}