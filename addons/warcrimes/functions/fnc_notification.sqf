#include "../script_component.hpp"
/*
 * Author: Dystroxic
 * Processes entity deaths to notify all players of war crimes
 *
 * Arguments:
 * 0: The object that was killed <OBJECT>
 * 1: The object that did the killing <OBJECT>
 * 2: The player that pulled the trigger <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
 
params ["_killed", "_killer", "_instigator"];

// If the killed entity is not a Man, exit out
if !(_killed isKindOf "CAManBase") exitWith {};

// Check if the person killed was armed
private _armedKilled = ({_x != ""} count [currentWeapon _killed, secondaryWeapon _killed]) > 0;

//systemChat format["%1, %2, %3", _killed, _killer, _instigator];
//systemChat format["Killer type: %1", typeOf _killer];

// The verb used in the notifications; can be changed depending on how the unit is killed
private _killString = "killed";

// If the instigator is null, we must find it from the killer object
if (isNull _instigator) then {
	// If the dead person died gradually with ACE, the killer is the last person/object to injure them
	if (_killer == _killed) then {
		private _lastSource = _killed getVariable ["ace_medical_lastDamageSource", objNull];
		if (!isNull _lastSource) then {
			//systemChat format["Using last damage source: %1", _lastSource];
			_killer = _lastSource;
		};
	};
	private _killer = vehicle _killer;
	// If killer still the same as killed, it would seem the unit killed themselves, so nothing to notify. Exit.
	if (_killer == _killed) exitWith {
		//systemChat format["Killer is same as killed, exiting"];
	};
	// If the killer is not a vehicle or in a vehicle, then the killer is the instigator
	if (_killer isKindOf "Man" && {isPlayer _killer}) then {
		_instigator = _killer;
		//systemChat format["Killer is Man: %1", _instigator];
	} else {
		private _uavOperators = UAVControl _killer;
		//systemChat format["UAV operators: %1", _uavOperators];
		if (!isNull (_uavOperators select 0)) then {
			_instigator = _uavOperators select 0;
			//systemChat format["UAV operator killer: %1", _instigator];
		} else {
			private _driver = currentPilot _killer;
			//systemChat format["Vehicle pilot: %1", _driver];
			// If there is no pilot, check for the generic driver
			if (isNull _driver) then {
				_driver = driver _killer;
			};
			// There is no driver/pilot of the vehicle, so nothing to notify. Exit.
			if (isNull _driver) exitWith {
				//systemChat format["Driver is null, exiting"];
			};
			_instigator = _driver;
		};
	};
};

//systemChat format["Instigator found: %1", _instigator];

// If we failed to find the instigator, if the instigator isn't a player, or if the instigator was themselves, exit.
if (isNull _instigator || !isPlayer _instigator || _instigator == _killed) exitWith {};

// Get some necessary data for message construction
private _instigatorName = name _instigator;
private _instigatorSide = side group _instigator;
private _killedName = name _killed;
private _killedSide = side group _killed;

// Create the message based on the situation
private _message = switch true do {
	// A civilian was killed and he was unarmed
	case (_killedSide isEqualTo civilian && {!_armedKilled}): {
		format ["%1 has %2 %3, an unarmed civilian.", _instigatorName, _killString, _killedName]
	};
	// A civilian was killed and he was unarmed
	case (GVAR(notifyCivilianCombatant) && {_killedSide isEqualTo civilian} && {_armedKilled}): {
		format ["%1 has %2 %3, a civilian combatant.", _instigatorName, _killString, _killedName]
	};
	// A civilian was killed and he was unarmed
	case ((animationState _killed) == "ACE_AmovPercMstpSsurWnonDnon"): {
		format ["%1 has %2 %3, a surrendered prisoner.", _instigatorName, _killString, _killedName]
	};
	// A civilian was killed and he was unarmed
	case ((animationState _killed) == "ACE_AmovPercMstpScapWnonDnon"): {
		format ["%1 has %2 %3, a restrained prisoner.", _instigatorName, _killString, _killedName]
	};
	// A civilian was killed and he was unarmed
	case (GVAR(notifyTeamkill) && {_killedSide isEqualTo _instigatorSide}): {
		format ["%1 has %2 %3, a teammate.", _instigatorName, _killString, _killedName]
	};
	default {
		nil
	};
};

if (!isNil "_message") then {
	_message remoteExec ["systemChat", 0];
};
