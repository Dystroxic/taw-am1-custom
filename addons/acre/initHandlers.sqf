// Add a handler to clear the last loaded loadout var when the Arsenal is opened
["ace_arsenal_displayOpened", {GVAR(lastLoadedLoadout) = nil;}] call CBA_fnc_addEventHandler;

// Add a handler to save ACRE loadouts
["ace_arsenal_onLoadoutSave", FUNC(saveACRELoadout)] call CBA_fnc_addEventHandler;

// Add a handler to track which loadout was last loaded
["ace_arsenal_onLoadoutLoad", {GVAR(lastLoadedLoadout) = _this select 1;}] call CBA_fnc_addEventHandler;

// Add a handler to track which loadout was last loaded
["ace_arsenal_displayClosed", {
	// If a loadout was loaded, run the script to load ACRE settings
	if (!isNil QGVAR(lastLoadedLoadout)) then {
		[GVAR(lastLoadedLoadout)] spawn FUNC(loadACRELoadout);
	};
}] call CBA_fnc_addEventHandler;
