
// Add the CBA setting for which items should be blacklisted
[
	QGVAR(globalBlacklist), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"Global Blacklist", // The setting display name in the settings menu
		"Items to be blacklisted from all ACE Arsenals, regardless of their individual configurations." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Arsenal"], // The category in the settings menu
	"[]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	// Script to run on setting change
	{
		diag_log format["Arsenal blacklist changed, new value: %1", _this];
		// filter out non-string and empty-string items in the array
		GVAR(globalBlacklist) = ([_this] call EFUNC(common,parseArray)) select {_x isEqualType "" && {_x != ""}};
		// If Crate Filler has been loaded, re-generate the asset lists
		if (!isNil QEGVAR(crateFiller,crateFillerCrates) && {!(EGVAR(crateFiller,crateFillerCrates) isEqualType "")}) then {
			[] call KPCF_fnc_getItems;
		};
	}
] call CBA_fnc_addSetting;

// Add the CBA setting for default loadouts
[
	QGVAR(defaultLoadouts), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"Default Loadouts", // The setting display name in the settings menu
		"Default loadouts to use for ACE Arsenal." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Arsenal"], // The category in the settings menu
	"[]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	// Script to run on setting change
	{
		_loadouts = ([_this] call EFUNC(common,parseArray));
		
		if (isNil QGVAR(defaultLoadoutLastNames)) then {
			GVAR(defaultLoadoutLastNames) = [];
		};
		
		// New loadouts start with the existing loadouts that weren't added via CBA_Settings
		ace_arsenal_defaultLoadoutsList = ace_arsenal_defaultLoadoutsList select { !((_x select 0) in GVAR(defaultLoadoutLastNames)) };
		
		// Add the new loadouts
		{
			_x call ace_arsenal_fnc_addDefaultLoadout;
		} forEach _loadouts;
		
		// Save this value for reading later if it's changed
		GVAR(defaultLoadoutLastNames) = _loadouts apply {_x select 0};
	}
] call CBA_fnc_addSetting;
