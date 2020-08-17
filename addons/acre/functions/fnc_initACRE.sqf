/*
 * Author: Dystroxic
 * Initialize ACRE using TAW settings
 *
 * Arguments: None
 *
 * Return Value:
 * None
 *
 * Public: Yes
*/

#include "../script_component.hpp"

private _defaultPreset = "";
private _presetName148 = "";
private _presetName152 = "";
private _presetName117 = "";
private _channels = [];

switch (playerSide) do {
	case west: {
		_defaultPreset = "default";
		_presetName148 = "preset_148_west";
		_presetName152 = "preset_152_west";
		_presetName117 = "preset_117_west";
		_channels = [GVAR(acreChannelsWest)] call EFUNC(common,parseArray);
	};
	case east: {
		_defaultPreset = "default2";
		_presetName148 = "preset_148_east";
		_presetName152 = "preset_152_east";
		_presetName117 = "preset_117_east";
		_channels = [GVAR(acreChannelsEast)] call EFUNC(common,parseArray);
	};
	case independent: {
		_defaultPreset = "default3";
		_presetName148 = "preset_148_independent";
		_presetName152 = "preset_152_independent";
		_presetName117 = "preset_117_independent";
		_channels = [GVAR(acreChannelsIndependent)] call EFUNC(common,parseArray);
	};
	case civilian: {
		_defaultPreset = "default4";
		_presetName148 = "preset_148_civilian";
		_presetName152 = "preset_152_civilian";
		_presetName117 = "preset_117_civilian";
		_channels = [GVAR(acreChannelsCivilian)] call EFUNC(common,parseArray);
	};
};

["ACRE_PRC148", _defaultPreset, _presetName148] call acre_api_fnc_copyPreset;
["ACRE_PRC152", _defaultPreset, _presetName152] call acre_api_fnc_copyPreset;
["ACRE_PRC117F", _defaultPreset, _presetName117] call acre_api_fnc_copyPreset;

{
	private _channelIdx = _forEachIndex + 1;
	// PRC148 has a limit of 16 channels
	if (_channelIdx <= 16 ) then {
		// Format 148 channels to start with the channel number (0-padded)
		private _channelIdxStr = str _channelIdx;
		if (_channelIdx < 10) then {
			_channelIdxStr = format["0%1", _channelIdx]
		};
		["ACRE_PRC148", _presetName148, _channelIdx, "label", format["%1-%2", _channelIdxStr, _x]] call acre_api_fnc_setPresetChannelField;
	};
	// PRC152 and 117F have a limit of 99 channels
	if (_channelIdx <= 99 ) then {
		["ACRE_PRC152", _presetName152, _channelIdx, "label", _x] call acre_api_fnc_setPresetChannelField;
		["ACRE_PRC117F", _presetName117, _channelIdx, "label", _x] call acre_api_fnc_setPresetChannelField;
	};
} forEach _channels;

["ACRE_PRC343", _defaultPreset] call acre_api_fnc_setPreset;
["ACRE_PRC148", _presetName148] call acre_api_fnc_setPreset;
["ACRE_PRC152", _presetName152] call acre_api_fnc_setPreset;
["ACRE_PRC117F", _presetName117] call acre_api_fnc_setPreset;
["ACRE_PRC77", _defaultPreset] call acre_api_fnc_setPreset;

GVAR(acreChannelsInitialized) = true;