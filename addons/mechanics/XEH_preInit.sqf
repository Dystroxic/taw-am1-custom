// A function to be run to process new values for the "taw_am1_global_arsenal_blacklist" setting
private _taw_am1_global_arsenal_blacklist_change_script = {
	// Ensure it's been parsed to array format (not string)
	_parsed = if (_this isEqualType "") then {
		if (_this == "") then {
			[]
		} else {
			parseSimpleArray taw_am1_global_arsenal_blacklist
		}
	} else {
		_this
	};
	// filter out non-string and empty-string items in the array
	taw_am1_global_arsenal_blacklist = _parsed select {_x isEqualType "" && {_x != ""}};
};

// Add the CBA setting for which items should be blacklisted
[
	"taw_am1_global_arsenal_blacklist", // The setting's name (also the global variable name)
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
taw_am1_global_arsenal_blacklist call _taw_am1_global_arsenal_blacklist_change_script;

// Add a handler to remove globally blacklisted items from 
taw_am1_handler_ace_arsenal_blacklist = ["ace_arsenal_displayOpened", {
	{
		if (_forEachIndex isEqualTo 0) then {
			ace_arsenal_virtualItems set [_forEachIndex, [(_x select 0) - taw_am1_global_arsenal_blacklist, (_x select 1) - taw_am1_global_arsenal_blacklist, (_x select 2) - taw_am1_global_arsenal_blacklist]];
		} else {
			if (_forEachIndex isEqualTo 1) then {
				ace_arsenal_virtualItems set [_forEachIndex, [(_x select 0) - taw_am1_global_arsenal_blacklist, (_x select 1) - taw_am1_global_arsenal_blacklist, (_x select 2) - taw_am1_global_arsenal_blacklist, (_x select 3) - taw_am1_global_arsenal_blacklist]];
			} else {
				ace_arsenal_virtualItems set [ace_arsenal_virtualItems find _x, _x - taw_am1_global_arsenal_blacklist];
			};
		};
	} foreach ace_arsenal_virtualItems;
}] call CBA_fnc_addEventHandler;

// Include the file that specifies default loadouts
#include "loadouts.sqf"