/*
 * Author: Dystroxic
 * Update the global item blacklist from changed CBA settings
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
*/

#include "../script_component.hpp"

params [
	["_blacklist", nil, [[], ""]],
	["_hideVanillaGunbags", nil, [false]]
];

// filter out non-string and empty-string items in the array
_blacklist = ([_blacklist] call EFUNC(common,parseArray)) select {_x isEqualType "" && {_x != ""}};
if _hideVanillaGunbags then {
	_blacklist = _blacklist + (("getText (_x >> 'editorSubcategory') isEqualTo 'EdSubcat_DismantledWeapons'" configClasses (configFile >> "CfgVehicles")) apply {configName _x});
};

GVAR(globalBlacklist) = _blacklist;

// If Crate Filler has been loaded, re-generate the asset lists
if (!isNil QEGVAR(crateFiller,crateFillerCrates) && {!(EGVAR(crateFiller,crateFillerCrates) isEqualType "")}) then {
	[] call KPCF_fnc_getItems;
};