
//=================================
//			CRATE FILLER
//=================================

// Add the CBA setting for enabling Crate Filler
[
	QGVAR(enabled), // The setting's name (also the global variable name)
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
	QGVAR(playersCanSpawnCrates), // The setting's name (also the global variable name)
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
	QGVAR(availableCrates), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"Crate Types", // The setting display name in the settings menu
		"Object classes of crates that can be spawned." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Crate Filler"], // The category in the settings menu
	"[""ACE_medicalSupplyCrate"", ""Box_NATO_Ammo_F"", ""Box_NATO_Wps_F"", ""Box_NATO_Equip_F"", ""Box_NATO_AmmoOrd_F"", ""Box_NATO_WpsLaunch_F"", ""Box_NATO_WpsSpecial_F"", ""B_supplyCrate_F""]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{
		diag_log format["Crate Filler crates changed, new value: %1", _this];
		// filter out non-string and empty-string items in the array
		GVAR(availableCrates) = ([_this] call EFUNC(common,parseArray)) select {_x isEqualType "" && {_x != ""}};
		// re-generate the asset lists
		[] call KPCF_fnc_getItems;
	},
	true // requires restart to take effect
] call CBA_fnc_addSetting;

// Add the CBA setting for Crate Filler target distance
[
	QGVAR(targetDistance), // The setting's name (also the global variable name)
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
	QGVAR(interactDistance), // The setting's name (also the global variable name)
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