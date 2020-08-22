#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = COMPONENT_NAME;
		author = "TAW AM1";
		authors[] = {"Dystroxic", "Constance"};
		url = QUOTE(URL);
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(DOUBLES(PREFIX,common)), // Main addon for this mod, which includes settings and macros
			"A3_Soft_F_MRAP_01", // MRAPS
			"A3_Armor_F_Gamma_APC_Wheeled_03", // APCs
			"A3_Air_F_EPB_Heli_Light_03", // Pandur
			"A3_Soft_F_Beta_MRAP_03", // MRAP
			"A3_Armor_F_EPB_MBT_03", // Leopard
			"A3_Air_F_Beta_Heli_Transport_02", // Merlin
			"A3_Armor_F_EPB_APC_Tracked_03" // Warrior
		};
		units[] = {
			QGVAR(hunter),
			QGVAR(hunter_hmg),
			QGVAR(hunter_gmg),
			QGVAR(pandur),
			QGVAR(wildcat_u),
			QGVAR(wildcat_a),
			QGVAR(fennek),
			QGVAR(fennek_hmg),
			QGVAR(fennek_gmg),
			QGVAR(leopard),
			QGVAR(merlin),
			QGVAR(warrior)
		};
		weapons[] = {};
	};
};

#include "CfgVehicles.hpp"