#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

// Track the logged in players and their DirectPlay IDs (used for map markers)
if (isServer) then {
	addMissionEventHandler ["PlayerConnected", FUNC(playerConnected)];
};