#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = COMPONENT_NAME;
		author = "TAW AM1";
		authors[] = {"Dystroxic", "Constance", "Blackbox", "SillyGhillie"};
		url = QUOTE(URL);
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(DOUBLES(PREFIX,common))};
		units[] = {};
		weapons[] = {};
	};
};
