// Add a handler to remove globally blacklisted items from 
GVAR(globalBlacklistHandler) = ["ace_arsenal_displayOpened", {
	{
		if (_forEachIndex isEqualTo 0) then {
			ace_arsenal_virtualItems set [_forEachIndex, [(_x select 0) - GVAR(globalBlacklist), (_x select 1) - GVAR(globalBlacklist), (_x select 2) - GVAR(globalBlacklist)]];
		} else {
			if (_forEachIndex isEqualTo 1) then {
				ace_arsenal_virtualItems set [_forEachIndex, [(_x select 0) - GVAR(globalBlacklist), (_x select 1) - GVAR(globalBlacklist), (_x select 2) - GVAR(globalBlacklist), (_x select 3) - GVAR(globalBlacklist)]];
			} else {
				ace_arsenal_virtualItems set [ace_arsenal_virtualItems find _x, _x - GVAR(globalBlacklist)];
			};
		};
	} foreach ace_arsenal_virtualItems;
}] call CBA_fnc_addEventHandler;
