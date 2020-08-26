#include "../script_component.hpp"
/*
 * Author: Dystroxic
 * Creates a marker on the map when an ACE tag is created (called from event handler)
 *
 * Arguments:
 * 0: The tag object <OBJECT>
 * 1: The texture that is applied to the tag <STRING>
 * 2: The object that the tag is attached to <OBJECT>
 * 3: The unit that created the tag <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
 
params ["_tagObject", "_texture", "_tagAttachedTo", "_unitThatCreated"];

// Start the marker ID number at a high value so it doesn't conflict with those created locally on the map itself
if (isNil QGVAR(markerNumber)) then {
	GVAR(markerNumber) = 10000;
};
if (isNil QGVAR(markerPointNum)) then {
	GVAR(markerPointNum) = 0;
};

// Find classes in the addon config and mission config that have matching textures
private _cfgCondition ="_texture in getArray (_x >> 'textures')";
private _tagClasses = _cfgCondition configClasses (missionConfigFile >> "ACE_Tags");
_tagClasses = _tagClasses + (_cfgCondition configClasses (configFile >> "ACE_Tags"));
// Get the first one that has a "mapText" attribute
private _tagClass = nil;
{
	if (isText(_x >> "mapText")) exitWith {
		_tagClass = _x;
	};
} forEach _tagClasses;
// If no class was found, exit out
if (isNil "_tagClass") exitWith {};

// The map marker will be placed at the tag position if the tag is on the ground, or at the center position of the tagged object if the tag is on an object
private _markerPos = if (isNull _tagAttachedTo) then {
	getPos _tagObject
} else {
	getPos _tagAttachedTo
};
private _namePlayer = name _unitThatCreated;

private _markerTextTemplate = getText(_tagClass >> "mapText");
// If the text uses a marker point number, increment it
if ("%2" in _markerTextTemplate) then {
	INC(GVAR(markerPointNum));
};
// Fill the template with correct values
private _markerText = format[_markerTextTemplate, _namePlayer, GVAR(markerPointNum)];

// Set the default marker icon
private _markerIcon = "hd_dot";
private _cfgMarkerIcon = getText(_tagClass >> "mapIcon");
// If the icon value is set and it's a real icon, use it instead of the default
if (!isNil "_cfgMarkerIcon" && {isClass (configFile >> "CfgMarkers" >> _cfgMarkerIcon)}) then {
	_markerIcon = _cfgMarkerIcon;
};

// Set the default marker colour
private _markerColor = "ColorBlack";
private _cfgMarkerColor = getText(_tagClass >> "mapColor");
// If the icon value is set and it's a real icon, use it instead of the default
if (!isNil "_cfgMarkerColor"&& {isClass (configFile >> "CfgMarkerColors" >> _cfgMarkerColor)}) then {
	_markerColor = _cfgMarkerColor;
};

// Default the tagger ID to be 0 (for single player)
private _taggerID = 0;
// Check to see if there's tracking of the player connection data
if (!isNil QEGVAR(common,playerConnectedData)) then {
	// Get the player data from the namespace
	private _playerData = EGVAR(common,playerConnectedData) getVariable (getPlayerUID _unitThatCreated);
	// Ensure that the right number of fields is set
	if (count _playerData >= 5) then {
		// Extract the _idstr field
		_taggerID = _playerData select 5;
	};
};

// Increment the marker number
INC(GVAR(markerNumber));
// Create a unique name for the marker that allows it to be deleted and is in the correct side
private _markerName = format ["_USER_DEFINED #%1/%2/%3", _taggerID, GVAR(markerNumber), 1];
// Create the marker
private _marker = createMarker [_markerName, _markerPos];
// Set its attributes
_marker setMarkerShape "ICON";
_marker setMarkerType _markerIcon;
_marker setMarkerText _markerText; 
_marker setMarkerColor _markerColor;