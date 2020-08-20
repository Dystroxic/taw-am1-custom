//=================================
//    ENHANCED FUEL CONSUMPTION
//=================================

// Add the CBA setting for enabling Enhanced Fuel Consumption
[
	QGVAR(enabled), // The setting's name (also the global variable name)
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
