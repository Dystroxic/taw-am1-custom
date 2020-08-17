/*
 * Author: Dystroxic
 * Initialize Babel using TAW settings
 *
 * Arguments:
 * 0: Reset language list <BOOL>
 * 1: Side to update <SIDE>
 *
 * Return Value:
 * None
 *
 * Public: Yes
*/

#include "../script_component.hpp"

// Ignore headless players and dedicated servers
if (!hasInterface || isDedicated) exitWith {};

params [
    ["_resetLanguageList", true, [true]],
    ["_updateSide", nil, [west]]
];

if (_resetLanguageList) then {
    // Clear the current list of Babel languages
    acre_sys_core_languages = [];

    // Add each of the configured languages to Babel
    {
        _x call acre_api_fnc_babelAddLanguageType;
    } forEach ([GVAR(babelLanguages)] call EFUNC(common,parseArray));
};

private _setLanguages = {
    // This allows Babel languages to be specified as a variable on the unit in the mission editor
    private _languagesPlayerSpeaks = player getVariable ["babel_languages", []];
    
    // If the languages weren't specified on the player in the mission editor, use the player's side to determine them
    if (_languagesPlayerSpeaks isEqualTo []) then {
        _languagesPlayerSpeaks = switch (playerside) do {
            case west: {
                [GVAR(babelLanguagesWest)] call EFUNC(common,parseArray)
            };
            case east: {
                [GVAR(babelLanguagesEast)] call EFUNC(common,parseArray)
            };
            // By default, independents can speak English and the native civilian language (translators)
            case independent: {
                [GVAR(babelLanguagesIndependent)] call EFUNC(common,parseArray)
            };
            default { 
                [GVAR(babelLanguagesCivilian)] call EFUNC(common,parseArray)
            };
        };
    };
    
    // Set the proper languages for this player
    _languagesPlayerSpeaks call acre_api_fnc_babelSetSpokenLanguages;
};

// Update the languages the player can speak if the list of languages changed or (the _updateSide variable is set AND the player doesn't have specific languages set on their unit AND the defaults for this player's side changed)
if (_resetLanguageList || (!isNil "_updateSide" && (player getVariable ["babel_languages", []]) isEqualTo [] && {playerSide isEqualTo _updateSide})) then {
    if (player != player || {!alive player}) then {
        [] spawn {
            waitUntil {player == player && alive player};
            [] call _setLanguages;
        };
    } else {
        [] call _setLanguages;
    };
};
