/*
 * Author: Dystroxic
 * Parses a string representation of a simple array to a real array. Handles inputs that are actual arrays and returns empty strings as empty arrays.
 *
 * Arguments:
 * 0: Input to parse <STRING>
 *
 * Return Value:
 * The parsed array <ARRAY>
 */

 #include "../script_component.hpp"

params [
    ["_str", nil, ["", []]]
];

if (_str isEqualType []) then {
    _str
} else {
    if (_str isEqualTo "") then {
        []
    } else {
        parseSimpleArray _str
    }
}
