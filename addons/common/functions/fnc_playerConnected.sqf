 #include "../script_component.hpp"
 /*
 * Author: Dystroxic
 * Handles the PlayerConnected event
 *
 * Arguments:
 * 0: ID <NUMBER>
 * 1: UID (Steam ID) <STRING>
 * 2: Name <STRING>
 * 3: JIP <BOOL>
 * 4: Owner <NUMBER>
 * 5: ID (string version) <STRING>
 *
 * Return Value:
 * None
 */

params ["_id", "_uid", "_name", "_jip", "_owner", "_idstr"];

if (isNil QGVAR(playerConnectedData)) then {
	GVAR(playerConnectedData) = call CBA_fnc_createNamespace;
};

diag_log format["Player connected: %1", _this];
// If the UID is set (it's not the server connecting to itself), save the data
if (_uid isEqualTo "") then {
	GVAR(playerConnectedData) setVariable [_uid, _this];
};