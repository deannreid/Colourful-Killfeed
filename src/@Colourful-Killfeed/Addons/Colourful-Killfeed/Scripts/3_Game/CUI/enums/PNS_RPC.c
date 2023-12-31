/*
 * DayZ - Piss N' Shit Mod
 * Developed by @Dean Reid
 *
 * Class: PNS_RPC.c
 *  
 * Class Information:
 *
 * Class handles Remote Procedure Calls
 * 
 * Info: Starts at WSID + 0
 *
 * Program Version: 1.0
 * Code Version: 1.0
 * 
 * Updates: 
 * 15/03/2023 - Initial Code Development
 */
enum CUIRPC {
    CUIRPC_START = 29462906720,
	
    // Client RPC's
    RPC_CLIENT_HANDLEUI,
    RPC_CLIENT_SETCONFIG,
}