#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = COMPONENT_NAME;
		author = "TAW AM1";
		authors[] = {"Dystroxic", "Killah Potatoes"};
		url = QUOTE(URL);
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(DOUBLES(PREFIX,common)), // Main addon for this mod, which includes settings and macros
			QUOTE(DOUBLES(PREFIX,arsenal)) // Arsenal mod includes settings (global blacklist) needed by crate filler
		};
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgEventHandlers.hpp"
#include "Cfg3DEN.hpp"
#include "CfgFunctions.hpp"

// Include Crate Filler files
#include "KPGUI\KPGUI_defines.hpp"
#include "KPCF\ui\KPCF_dialog.hpp"
