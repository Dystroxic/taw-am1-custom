#include "script_component.hpp"
#include "defines.hpp"

class CfgPatches
{
	class ADDON
	{
		name = COMPONENT_NAME;
		author = "TAW AM1";
		authors[] = { "Dystroxic" };
		url = QUOTE(URL);
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"taw_am1_custom_main", "A3_Data_F", "A3_Weapons_F", "A3_Data_F_Sams_Loadorder", "ace_arsenal", "ace_grenades", "rhs_c_weapons", "rhsusf_c_weapons" };
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgCloudlets.hpp"
#include "CfgMoves.hpp"