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
			QUOTE(DOUBLES(PREFIX,common)), // Main addon for this mod, which includes settings and macros
			"A3_Weapons_F_Ammoboxes", // Backpacks
			"A3_Characters_F" // Base units/uniforms
		};
		units[] = {
			QGVAR(Carryall),
			QGVAR(AssaultPack),
			QGVAR(Kitbag)
		};
		weapons[] = {
			QGVAR(combatFatigues_greenShirt),
			QGVAR(combatFatigues_tanShirt),
			QGVAR(combatFatigues_greyShirt),
			QGVAR(combatFatigues_blackShirt),
			QGVAR(combatFatigues_fullCamo_rs),
			QGVAR(combatFatigues_greenShirt_rs),
			QGVAR(combatFatigues_tanShirt_rs),
			QGVAR(combatFatigues_greyShirt_rs),
			QGVAR(combatFatigues_blackShirt_rs),
			QGVAR(combatFatigues_fullCamo_ts),
			QGVAR(combatFatigues_greyShirt_ts),
			QGVAR(combatFatigues_greenShirt_ts),
			QGVAR(combatFatigues_tanShirt_ts),
			QGVAR(combatFatigues_polo),
			QGVAR(coveralls_guardian),
			QGVAR(boonie),
			QGVAR(pcap),
			QGVAR(bcap),
			QGVAR(bcap_hp),
			QGVAR(bcap_hs),
			QGVAR(ech),
			QGVAR(ech_cls),
			QGVAR(ech_fl),
			QGVAR(ech_sl),
			QGVAR(ech_pl),
			QGVAR(ech_med3),
			QGVAR(ech_eng),
			QGVAR(lch),
			QGVAR(lch_blk),
			QGVAR(lch_wg),
			QGVAR(lch_rgr),
			QGVAR(lch_fde),
			QGVAR(ach),
			QGVAR(ach_arid),
			QGVAR(ach_wood),
			QGVAR(stealth),
			QGVAR(acvc),
			QGVAR(contact),
			QGVAR(contact_chops),
			QGVAR(contact_earguard)
		};
	};
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"