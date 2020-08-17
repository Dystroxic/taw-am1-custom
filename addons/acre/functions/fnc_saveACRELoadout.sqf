/*
 * Author: Dystroxic
 * Saves the current ACRE configuration with the given loadout name
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
    ["_loadoutIdx", nil, [0]],
    ["_loadoutData", nil, [[]], 2]
];

private _loadoutName = _loadoutData select 0;
private _radioData = nil;

// Only save new data if (1) there are no ACRE radios, or (2) there are and they have been initialized with unique IDs
// This will 
if ([] call acre_api_fnc_isInitialized) then {
    private _radios = [] call acre_api_fnc_getCurrentRadioList;
    private _mpttRadioList = [] call acre_api_fnc_getMultiPushToTalkAssignment;
    private _activeRadio = [] call acre_api_fnc_getCurrentRadio;
    _radioData = [];
    {
        private _baseRadio = [_x] call acre_api_fnc_getBaseRadio;
        private _ptt = _mpttRadioList find _x;
        private _channel = [_x] call acre_api_fnc_getRadioChannel;
        private _volume = [_x] call acre_api_fnc_getRadioVolume;
        private _spatial = [_x] call acre_api_fnc_getRadioSpatial;
        private _active = _x isEqualTo _activeRadio;
        _radioData pushBack [_baseRadio, _ptt, _channel, _volume, _spatial, _active];
    } forEach _radios;
} else {
    // Check if a loadout was loaded before saving this one; in that case, use radio saved settings from the loaded one
    if (!isNil QGVAR(lastLoadedLoadout)) then {
        // Get the saves ACRE loadouts
        private _acreLoadouts = +(profileNamespace getVariable [QGVAR(loadouts), []]);
        // Find the one for this loadout name
        private _loadoutIdx = _acreLoadouts findIf {(_x select 0) isEqualTo GVAR(lastLoadedLoadout)};
        if (_loadoutIdx >= 0) then {
            _radioData = [];
            // The list of radios is the second value of the saved loadout with this name
            private _loadoutRadios = (_acreLoadouts select _loadoutIdx) select 1;
            // Get a list of all base radios in this loadout
            private _radios = (items player select { [_x] call acre_api_fnc_isBaseRadio });
            {
                private _baseRadio = _x;
                // Find the first radio in the saved loadout that has the same base class
                // This will get the radio with the lowest PTT number, since they are sorted by PTT number when saved
                private _loadoutRadioIdx = _loadoutRadios findIf {(_x select 0) isEqualTo _baseRadio};
                if (_loadoutRadioIdx >= 0) then {
                    // If the loadout that was last loaded has settings for a radio of this type, add those settings to this new loadout
                    _radioData pushBack (_loadoutRadios select _loadoutRadioIdx);
                    // Delete that setting from the list of loaded loadout radios so we don't re-use a single radio setting
                    _loadoutRadios deleteAt _loadoutRadioIdx;
                };
            } forEach _radios;
        };
    };
};

// Only save anything if ACRE data was properly loaded (so we don't overwrite a good save with a bad one)
if (!isNil "_radioData") then {
    // Sort the radio list by ascending PTT order
    _radioData = [_radioData, [], { _x select 1 }, "ASCEND"] call BIS_fnc_sortBy;
    private _acreLoadouts = +(profileNamespace getVariable [QGVAR(loadouts), []]);
    private _loadoutIndex = _acreLoadouts findIf {(_x select 0) isEqualTo _loadoutName};
    private _saveData = [_loadoutName, _radioData];
    if ((count _radioData) isEqualTo 0) then {
        // There are no radios in the loadout
        if (_loadoutIndex >= 0) then {
            // But there is a corresponding ACRE loadout variable, so delete it
            _acreLoadouts deleteAt _loadoutIndex;
        };
    } else {
        // There are radios in the loadout
        if (_loadoutIndex isEqualTo -1) then {
            // This loadout name doesn't exist, so add a new entry for it
            _acreLoadouts pushBack _saveData;
        } else {
            // A loadout of this name already exists, so overwrite it
            _acreLoadouts set [_loadoutIndex, _saveData];
        };
    };
    // Save the new set of ACRE loadouts
    profileNamespace setVariable [QGVAR(loadouts), _acreLoadouts];
};
