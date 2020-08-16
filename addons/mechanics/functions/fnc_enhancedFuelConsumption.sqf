/*
 * Author: Dystroxic
 * Enable enhanced fuel consumption on a vehicle
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: Yes
*/

#include "../script_component.hpp"

params [
    ["_vehicle", nil, [player]]
];

if (isNil QGVAR(fuelConsumptionVehicles)) then {
	GVAR(fuelConsumptionVehicles) = [];
};

if (local _vehicle && !(_vehicle in GVAR(fuelConsumptionVehicles))) then {
	GVAR(fuelConsumptionVehicles) pushBack _vehicle;
    // Run the loop while the vehicle is local to the player and the system is enabled
	while {local _vehicle && GVAR(fuelConsumptionEnabled)} do {
        // Only use fuel if engine is on
		if (isEngineOn _vehicle) then {
            // If it's moving less than 5, it's at idle
			if (speed _vehicle > 5) then {
                // If it's moving at more than 90% of it's max speed, it's at max throttle
				if (speed _vehicle > (getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> "maxSpeed") * 0.9)) then {
					_vehicle setFuel (fuel _vehicle - (1 / (GVAR(fuelConsumptionTimeMax) * 60)));
				} else {
					_vehicle setFuel (fuel _vehicle - (1 / (GVAR(fuelConsumptionTimeNormal) * 60)));
				};
			} else {
				_vehicle setFuel (fuel _vehicle - (1 / (GVAR(fuelConsumptionTimeIdle) * 60)));
			};
		};
		uiSleep 1;
	};
	GVAR(fuelConsumptionVehicles) deleteAt (GVAR(fuelConsumptionVehicles) find _vehicle);
};