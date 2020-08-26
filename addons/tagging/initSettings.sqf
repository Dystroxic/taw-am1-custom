// Add a setting for enabling/disabling map tagging
[
	QGVAR(mapTagging), // The setting's name (also the global variable name)
	"CHECKBOX", // The setting type
	[
		"Map Tagging", // The setting display name in the settings menu
		"Whether ACE spray paint tags should also create a marker on the map." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Tagging"], // The category in the settings menu
	false, // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{
		// Don't do anything if it's not the server (only the server runs the event handler)
		if (!isServer) exitWith {};
		// If it's changed to "enabled", add the event handler
		if (_this) then {
			GVAR(mapTaggingHandler) = ["ace_tagCreated", FUNC(mapTag)] call CBA_fnc_addEventHandler;
		} else {
			// If it's changed to "disabled", check to see if there was previously an event handler
			if (!isNil QGVAR(mapTaggingHandler)) then {
				// If so, remove it
				["ace_tagCreated", GVAR(mapTaggingHandler)] call CBA_fnc_removeEventHandler;
				// Delete the stored ID of the old handler since it no longer exists
				GVAR(mapTaggingHandler) = nil;
			};
		};
	}
] call CBA_fnc_addSetting;