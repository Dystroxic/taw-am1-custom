#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = COMPONENT_NAME;
		author = "TAW AM1";
		authors[] = {"Dystroxic"};
		url = QUOTE(URL);
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(DOUBLES(PREFIX,common)) // Main addon for this mod, which includes settings and macros
		};
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgEventHandlers.hpp"
