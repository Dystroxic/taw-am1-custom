#include "script_component.hpp"
#include "defines.hpp"

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
			QUOTE(DOUBLES(PREFIX,common)), // Common addon for this mod, which includes settings, macros, and functions
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Data_F_Sams_Loadorder", // For patching animations (swim and ladder speed)
			"ace_arsenal",				// For adding ACE Arsenal event handlers
			"acre_api",					// For configuring Babel and radio channel presets
			"ace_grenades",				// For patching smoke/flare items
			"rhs_c_weapons",			// For patching smoke/flare items
			"rhsusf_c_weapons",			// For patching smoke/flare items
			"MS_IFF_Addon"				// For patching IR strobe items
		};
		units[] = {};
		weapons[] = {};
	};
};

#include "Whitelist.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgCloudlets.hpp"
#include "CfgMoves.hpp"
#include "CfgFunctions.hpp"
#include "Cfg3DEN.hpp"

// Include Crate Filler files
#include "KPGUI\KPGUI_defines.hpp"
#include "KPCF\ui\KPCF_dialog.hpp"
