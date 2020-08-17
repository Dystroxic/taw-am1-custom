/*
 * Author: Dystroxic
 * Stores the last loaded loadout for later use with ACRE
 *
 * Arguments: 
 * 0: Loadout name <STRING>
 *
 * Return Value:
 * None
 *
 * Public: Yes
*/

#include "../script_component.hpp"

params [
    ["_loadoutName", nil, [""]]
];

private _acreLoadouts = +(profileNamespace getVariable [QGVAR(loadouts), []]);
private _loadoutIdx = _acreLoadouts findIf {(_x select 0) isEqualTo _loadoutName};

// If there's no stored ACRE data for this loadout, exit out
if (_loadoutIdx isEqualTo -1) exitWith{};

// The list of radios is the second value of the saved loadout with this name
private _loadoutRadios = (_acreLoadouts select _loadoutIdx) select 1;

// Wait until the ACRE radios are initialized
waitUntil {[] call acre_api_fnc_isInitialized};

private _multiPTT = [];
private _radios = [] call acre_api_fnc_getCurrentRadioList;
private _currentRadio = nil;
{
    // Get the base radio class for the given radio ID
    private _baseRadio = [_x] call acre_api_fnc_getBaseRadio;
    // Find this base class in the loadout list
    private _radioIdx = _loadoutRadios findIf {(_x select 0) isEqualTo _baseRadio};
    // If the base class was found, configure it
    if (_radioIdx >= 0) then {
        // Extract params from the stored loadout data
        (_loadoutRadios select _radioIdx) params ["_baseRadio", "_ptt", "_channel", "_volume", "_spatial", "_active"];
        // Set the selected channel
        [_x, _channel] call acre_api_fnc_setRadioChannel;
        // Set the current volume
        [_x, _volume] call acre_api_fnc_setRadioVolume;
        // Set the spatial setting
        [_x, _spatial] call acre_api_fnc_setRadioSpatial;
        // Set the PTT in the array
        _multiPTT set [_ptt, _x];
        // If it was the active radio, set it as active/current
        if (_active) then {
            _currentRadio = _x;
        };
        // Delete the one we just consumed from the loadout list so it isn't re-used
        _loadoutRadios deleteAt _radioIdx;
    };
} forEach _radios;

// Filter out null values (will exist if radios were removed from the loadout after loading it)
_multiPTT = _multiPTT select {!isNil "_x" && {_x isEqualType ""}};

// Set the PTT assignments
[_multiPTT] call acre_api_fnc_setMultiPushToTalkAssignment;

// Set the currently active radio
if (!isNil "_currentRadio") then {
    sleep 1;
    [_currentRadio] call acre_api_fnc_setCurrentRadio;
};