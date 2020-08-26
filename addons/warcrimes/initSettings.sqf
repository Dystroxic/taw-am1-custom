// Add a setting for enabling/disabling war crime notifications
[
	QGVAR(notifications), // The setting's name (also the global variable name)
	"CHECKBOX", // The setting type
	[
		"Notifications Enabled", // The setting display name in the settings menu
		"Whether to show notifications when war crimes occur." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), QUOTE(COMPONENT_BEAUTIFIED)], // The category in the settings menu
	false, // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{
		// Don't do anything if it's not the server (only the server runs the event handler)
		if (!isServer) exitWith {};

		// Always ensure any existing handlers are removed
		if (!isNil QGVAR(notificationHandler)) then {
			// If so, remove it
			removeMissionEventHandler ["EntityKilled", GVAR(notificationHandler)];
			// Delete the stored ID of the old handler since it no longer exists
			GVAR(notificationHandler) = nil;
		};

		// If it's changed to "enabled", add the event handler
		if (_this) then {
			GVAR(notificationHandler) = addMissionEventHandler ["EntityKilled", FUNC(notification)];
		};
	}
] call CBA_fnc_addSetting;

// Add a setting for enabling/disabling war crime notifications
[
	QGVAR(notifyCivilianCombatant), // The setting's name (also the global variable name)
	"CHECKBOX", // The setting type
	[
		"Killing Armed Civilians", // The setting display name in the settings menu
		"Whether killing armed civilians is a war crime." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), QUOTE(COMPONENT_BEAUTIFIED)], // The category in the settings menu
	true, // The default value
	1 // isGlobal, 1 = yes (cannot be overwritten by clients)
] call CBA_fnc_addSetting;

// Add a setting for enabling/disabling war crime notifications
[
	QGVAR(notifyTeamkill), // The setting's name (also the global variable name)
	"CHECKBOX", // The setting type
	[
		"Teamkills", // The setting display name in the settings menu
		"Whether notifications should be made for teamkills." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), QUOTE(COMPONENT_BEAUTIFIED)], // The category in the settings menu
	false, // The default value
	1 // isGlobal, 1 = yes (cannot be overwritten by clients)
] call CBA_fnc_addSetting;