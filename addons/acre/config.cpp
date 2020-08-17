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
			QUOTE(DOUBLES(PREFIX,common)), // Main addon for this mod, which includes settings and macros
			"acre_api",					// For configuring Babel and radio channel presets
			"ace_arsenal"				// For adding ACE Arsenal event handlers
		};
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgEventHandlers.hpp"
