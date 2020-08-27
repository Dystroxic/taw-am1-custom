/*
    Killah Potatoes Cratefiller v1.1.0

    Author: Dubjunk - https://github.com/KillahPotatoes

    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html

    Description:
    This will initialize the KP cratefiller functionalities.

    Dependencies:
        * KPGUI
*/

#include "../../script_component.hpp"

// Only run, when we've a real player
if (hasInterface && GVAR(enabled)) then {

    // Read the variables
    [] call compile preprocessFileLineNumbers QPATHTO_C(KPCF\variables.sqf);

    // Check for ACE
    KPCF_ace = isClass (configfile >> "CfgPatches" >> "ace_common");

    // Add CBA event handler to the base objects
    ["All", "init", {
        if ((_this select 0) getVariable [QGVAR(isCrateFiller), false]) then {
            diag_log format["Adding Crate Filler to object %1", _this select 0];
            [_this select 0] call KPCF_fnc_manageActions;
        };
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
};
