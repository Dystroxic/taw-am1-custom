#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = COMPONENT_NAME;
		author = "TAW AM1";
		authors[] = {"Tonic", "Dystroxic"};
		url = QUOTE(URL);
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[]=
		{
			QUOTE(DOUBLES(PREFIX,common)), // Main addon for this mod, which includes settings and macros
			"A3_Data_F",
			"A3_UI_F"
		};
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgFunctions.hpp"
#include "ui.hpp"