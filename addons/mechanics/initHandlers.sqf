// Add a handler to remove globally blacklisted items from 
GVAR(arsenalGlobalBlacklistHandler) = ["ace_arsenal_displayOpened", {
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
