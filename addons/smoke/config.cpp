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
			"A3_Data_F",
			"A3_Weapons_F",
			"ace_grenades",				// For patching smoke/flare items
			"rhs_c_weapons",			// For patching smoke/flare items
			"rhsusf_c_weapons"			// For patching smoke/flare items
		};
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgCloudlets.hpp"
