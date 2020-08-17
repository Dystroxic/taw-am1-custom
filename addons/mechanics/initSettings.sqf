//=================================
//          ACE ARSENAL
//=================================

// Add the CBA setting for which items should be blacklisted
[
	QGVAR(globalArsenalBlacklist), // The setting's name (also the global variable name)
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
		GVAR(globalArsenalBlacklist) = ([_this] call EFUNC(common,parseArray)) select {_x isEqualType "" && {_x != ""}};
		// If Crate Filler has been loaded, re-generate the asset lists
		if (!isNil QGVAR(crateFillerCrates) && {!(GVAR(crateFillerCrates) isEqualType "")}) then {
			[] call KPCF_fnc_getItems;
		};
	}
] call CBA_fnc_addSetting;

// Add the CBA setting for which items should be blacklisted
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


//=================================
//    ENHANCED FUEL CONSUMPTION
//=================================

// Add the CBA setting for enabling Enhanced Fuel Consumption
[
	QGVAR(fuelConsumptionEnabled), // The setting's name (also the global variable name)
	"CHECKBOX", // The setting type
	[
		"Enabled", // The setting display name in the settings menu
		"Whether to enable the Enhanced Fuel Consumption system." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Enhanced Fuel Consumption"], // The category in the settings menu
	false, // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{
		// Ignore for dedicated servers
		if(isDedicated) exitWith{};
		// Check if there's an existing handler
		private _handlerExists = !isNil QGVAR(fuelConsumptionHandler);
		// If the setting is being disabled and a hander exists, remove it
		if (!_this && _handlerExists) then {
			diag_log "Removing old Enhanced Fuel Consumption handler";
			player removeEventHandler ["GetInMan", GVAR(fuelConsumptionHandler)];
		};
		// If the setting is being enabled and a handler doesn't exist, add it
		if (_this && !_handlerExists) then {
			diag_log "Adding new Enhanced Fuel Consumption handler";
			GVAR(fuelConsumptionHandler) = player addEventHandler ["GetInMan", {[_this select 2] spawn FUNC(enhancedFuelConsumption);}];
		};
	} // Script to run on setting change
] call CBA_fnc_addSetting;

// Add the CBA setting for Enhanced Fuel Consumption idle consumption
[
	QGVAR(fuelConsumptionTimeIdle), // The setting's name (also the global variable name)
	"SLIDER", // The setting type
	[
		"Full Tank Duration (Idle)", // The setting display name in the settings menu
		"How long a full tank of fuel will last at idle (in minutes)." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Enhanced Fuel Consumption"], // The category in the settings menu
	[1, 600, 120, 0], // The default value
	1 // isGlobal, 1 = yes (cannot be overwritten by clients)
] call CBA_fnc_addSetting;

// Add the CBA setting for Enhanced Fuel Consumption normal consumption
[
	QGVAR(fuelConsumptionTimeNormal), // The setting's name (also the global variable name)
	"SLIDER", // The setting type
	[
		"Full Tank Duration (Normal)", // The setting display name in the settings menu
		"How long a full tank of fuel will last at normal throttle (in minutes)." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Enhanced Fuel Consumption"], // The category in the settings menu
	[1, 600, 60, 0], // The default value
	1 // isGlobal, 1 = yes (cannot be overwritten by clients)
] call CBA_fnc_addSetting;

// Add the CBA setting for Enhanced Fuel Consumption max consumption
[
	QGVAR(fuelConsumptionTimeMax), // The setting's name (also the global variable name)
	"SLIDER", // The setting type
	[
		"Full Tank Duration (Max)", // The setting display name in the settings menu
		"How long a full tank of fuel will last at maximum throttle (in minutes)." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Enhanced Fuel Consumption"], // The category in the settings menu
	[1, 600, 40, 0], // The default value
	1 // isGlobal, 1 = yes (cannot be overwritten by clients)
] call CBA_fnc_addSetting;


//=================================
//			CRATE FILLER
//=================================

// Add the CBA setting for enabling Crate Filler
[
	QGVAR(crateFillerEnabled), // The setting's name (also the global variable name)
	"CHECKBOX", // The setting type
	[
		"Enabled", // The setting display name in the settings menu
		"Whether to use enable the Crate Filler system." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Crate Filler"], // The category in the settings menu
	false, // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	nil,
	true // requires restart to take effect
] call CBA_fnc_addSetting;

// Add the CBA setting for enabling Crate Filler
[
	QGVAR(crateFillerPlayersCanSpawnCrates), // The setting's name (also the global variable name)
	"CHECKBOX", // The setting type
	[
		"Crate Spawning/Deleting", // The setting display name in the settings menu
		"Whether players can spawn new crates or delete existing crates (if false, can still load existing crates)." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Crate Filler"], // The category in the settings menu
	false, // The default value
	1 // isGlobal, 1 = yes (cannot be overwritten by clients)
] call CBA_fnc_addSetting;

// Add the CBA setting for Crate Filler crate types
[
	QGVAR(crateFillerCrates), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"Crate Types", // The setting display name in the settings menu
		"Object classes of crates that can be spawned." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Crate Filler"], // The category in the settings menu
	"[]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{
		diag_log format["Crate Filler crates changed, new value: %1", _this];
		// filter out non-string and empty-string items in the array
		GVAR(crateFillerCrates) = ([_this] call EFUNC(common,parseArray)) select {_x isEqualType "" && {_x != ""}};
		// re-generate the asset lists
		[] call KPCF_fnc_getItems;
	},
	true // requires restart to take effect
] call CBA_fnc_addSetting;

// Add the CBA setting for Crate Filler target distance
[
	QGVAR(crateFillerTargetDistance), // The setting's name (also the global variable name)
	"SLIDER", // The setting type
	[
		"Target Distance", // The setting display name in the settings menu
		"The maximum distance from the spawn object to a target vehicle." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Crate Filler"], // The category in the settings menu
	[0, 200, 10, 0], // The default value
	1 // isGlobal, 1 = yes (cannot be overwritten by clients)
] call CBA_fnc_addSetting;

// Add the CBA setting for Crate Filler interact distance
[
	QGVAR(crateFillerInteractDistance), // The setting's name (also the global variable name)
	"SLIDER", // The setting type
	[
		"Interaction Distance", // The setting display name in the settings menu
		"How close a player has to be (in meters) to a crate filler object in order to use it." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Crate Filler"], // The category in the settings menu
	[0, 200, 5, 0], // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	nil, // no update script
	true // requires restart to take effect
] call CBA_fnc_addSetting;