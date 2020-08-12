#include "script_component.hpp"

// A function to be run to process new values for the "taw_am1_global_arsenal_blacklist" setting
private _taw_am1_global_arsenal_blacklist_change_script = {
	// Ensure it's been parsed to array format (not string)
	_parsed = if (_this isEqualType "") then {
		if (_this == "") then {
			[]
		} else {
			parseSimpleArray _this
		}
	} else {
		_this
	};
	// filter out non-string and empty-string items in the array
	GVAR(globalArsenalBlacklist) = _parsed select {_x isEqualType "" && {_x != ""}};
};

// Add the CBA setting for which items should be blacklisted
[
	QGVAR(globalArsenalBlacklist), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"Global Arsenal Blacklist", // The setting display name in the settings menu
		"Items to be blacklisted from all ACE Arsenals, regardless of their individual configurations." // The tooltip for the setting in the settings menu
	], 
	"TAW AM1", // The category in the settings menu
	"[]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	// Script to run on setting change
	_taw_am1_global_arsenal_blacklist_change_script
] call CBA_fnc_addSetting;

// Run the script to process the setting to handle the initial value
GVAR(globalArsenalBlacklist) call _taw_am1_global_arsenal_blacklist_change_script;

// Add a handler to remove globally blacklisted items from 
taw_am1_handler_ace_arsenal_blacklist = ["ace_arsenal_displayOpened", {
	{
		if (_forEachIndex isEqualTo 0) then {
			ace_arsenal_virtualItems set [_forEachIndex, [(_x select 0) - GVAR(globalArsenalBlacklist), (_x select 1) - GVAR(globalArsenalBlacklist), (_x select 2) - GVAR(globalArsenalBlacklist)]];
		} else {
			if (_forEachIndex isEqualTo 1) then {
				ace_arsenal_virtualItems set [_forEachIndex, [(_x select 0) - GVAR(globalArsenalBlacklist), (_x select 1) - GVAR(globalArsenalBlacklist), (_x select 2) - GVAR(globalArsenalBlacklist), (_x select 3) - GVAR(globalArsenalBlacklist)]];
			} else {
				ace_arsenal_virtualItems set [ace_arsenal_virtualItems find _x, _x - GVAR(globalArsenalBlacklist)];
			};
		};
	} foreach ace_arsenal_virtualItems;
}] call CBA_fnc_addEventHandler;


// A function to be run to process new values for the "taw_am1_default_loadouts" setting
private _taw_am1_default_loadouts_change_script = {
	// Ensure it's been parsed to array format (not string)
	_parsed = if (_this isEqualType "") then {
		if (_this == "") then {
			[]
		} else {
			parseSimpleArray _this
		}
	} else {
		_this
	};
	
	if (isNil QGVAR(defaultLoadoutLastNames)) then {
		GVAR(defaultLoadoutLastNames) = [];
	};
	
	// New loadouts start with the existing loadouts that weren't added via CBA_Settings
	ace_arsenal_defaultLoadoutsList = ace_arsenal_defaultLoadoutsList select { !((_x select 0) in GVAR(defaultLoadoutLastNames)) };
	
	// Add the new loadouts
	{
		_x call ace_arsenal_fnc_addDefaultLoadout;
	} forEach _parsed;
	
	// Save this value for reading later if it's changed
	GVAR(defaultLoadoutLastNames) = _parsed apply {_x select 0};
};

// Add the CBA setting for which items should be blacklisted
[
	QGVAR(defaultLoadouts), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"Default Loadouts", // The setting display name in the settings menu
		"Default loadouts to use for ACE Arsenal." // The tooltip for the setting in the settings menu
	], 
	"TAW AM1", // The category in the settings menu
	"[]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	// Script to run on setting change
	_taw_am1_default_loadouts_change_script
] call CBA_fnc_addSetting;

// Run the script to process the setting to handle the initial value
GVAR(defaultLoadouts) call _taw_am1_default_loadouts_change_script;
