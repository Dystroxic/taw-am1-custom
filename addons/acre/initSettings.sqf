
//=================================
//            ACRE
//=================================
// Add the CBA setting for ACRE radio channels for WEST
[
	QGVAR(acreChannelsWest), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"WEST Channels", // The setting display name in the settings menu
		"The names of channels for units on the WEST team." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "ACRE"], // The category in the settings menu
	"[]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{if (!isNil QGVAR(acreChannelsInitialized)) then {call FUNC(initACRE);};} // Script to run on setting change
] call CBA_fnc_addSetting;

// Add the CBA setting for ACRE radio channels for EAST
[
	QGVAR(acreChannelsEast), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"EAST Channels", // The setting display name in the settings menu
		"The names of channels for units on the EAST team." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "ACRE"], // The category in the settings menu
	"[]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{if (!isNil QGVAR(acreChannelsInitialized)) then {call FUNC(initACRE);};} // Script to run on setting change
] call CBA_fnc_addSetting;

// Add the CBA setting for ACRE radio channels for INDEPENDENT
[
	QGVAR(acreChannelsIndependent), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"INDP Channels", // The setting display name in the settings menu
		"The names of channels for units on the INDEPENDENT team." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "ACRE"], // The category in the settings menu
	"[]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{if (!isNil QGVAR(acreChannelsInitialized)) then {call FUNC(initACRE);};} // Script to run on setting change
] call CBA_fnc_addSetting;

// Add the CBA setting for ACRE radio channels for WEST
[
	QGVAR(acreChannelsCivilian), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"CIV Channels", // The setting display name in the settings menu
		"The names of channels for units on the CIVILIAN team." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "ACRE"], // The category in the settings menu
	"[]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{if (!isNil QGVAR(acreChannelsInitialized)) then {call FUNC(initACRE);};} // Script to run on setting change
] call CBA_fnc_addSetting;


//=================================
//             BABEL
//=================================

// Add the CBA setting for which Babel languages exist
[
	QGVAR(babelLanguages), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"Babel Languages", // The setting display name in the settings menu
		"Languages that should exist by default." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Babel"], // The category in the settings menu
	"[[""en"", ""English""],[""ru"", ""Russian""],[""ar"", ""Arabic""],[""fr"", ""French""],[""gb"", ""Gibberish""]]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{
		[true] call FUNC(initBabel);
	} // Script to run on setting change
] call CBA_fnc_addSetting;

// Add the CBA setting for which Babel languages WEST units should speak by default
[
	QGVAR(babelLanguagesWest), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"WEST Spoken Languages", // The setting display name in the settings menu
		"Languages that WEST units should speak by default (unless overwridden by per-unit init)." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Babel"], // The category in the settings menu
	"[""en""]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{
		[false, west] call FUNC(initBabel);
	} // Script to run on setting change
] call CBA_fnc_addSetting;

// Add the CBA setting for which Babel languages EAST units should speak by default
[
	QGVAR(babelLanguagesEast), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"EAST Spoken Languages", // The setting display name in the settings menu
		"Languages that EAST units should speak by default (unless overwridden by per-unit init)." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Babel"], // The category in the settings menu
	"[""ru""]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{
		[false, east] call FUNC(initBabel);
	} // Script to run on setting change
] call CBA_fnc_addSetting;

// Add the CBA setting for which Babel languages INDEPENDENT units should speak by default
[
	QGVAR(babelLanguagesIndependent), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"INDP Spoken Languages", // The setting display name in the settings menu
		"Languages that INDEPENDENT units should speak by default (unless overwridden by per-unit init)." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Babel"], // The category in the settings menu
	"[""fr""]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{
		[false, independent] call FUNC(initBabel);
	} // Script to run on setting change
] call CBA_fnc_addSetting;

// Add the CBA setting for which Babel languages CIVILIAN units should speak by default
[
	QGVAR(babelLanguagesCivilian), // The setting's name (also the global variable name)
	"EDITBOX", // The setting type
	[
		"CIV Spoken Languages", // The setting display name in the settings menu
		"Languages that CIVILIAN units should speak by default (unless overwridden by per-unit init)." // The tooltip for the setting in the settings menu
	], 
	[QUOTE(PREFIX_BEAUTIFIED), "Babel"], // The category in the settings menu
	"[""gb""]", // The default value
	1, // isGlobal, 1 = yes (cannot be overwritten by clients)
	{
		[false, civilian] call FUNC(initBabel);
	} // Script to run on setting change
] call CBA_fnc_addSetting;
