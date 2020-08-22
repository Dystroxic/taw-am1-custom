#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = COMPONENT_NAME;
		author = "TAW AM1";
		authors[] = {"Dystroxic", "Blackbox", "Constance"};
		url = QUOTE(URL);
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(DOUBLES(PREFIX,common)) // Main addon for this mod, which includes settings and macros
		};
		units[] = {};
		weapons[] = {
			GVAR(rbg_32_c),
			GVAR(rbg_32_gy),
			GVAR(f2000_bk),
			GVAR(f2000c_bk),
			GVAR(f2000gl_bk),
			GVAR(p99_gy),
			GVAR(p99_wh),
			GVAR(tar21_blk),
			GVAR(tar21c_blk),
			GVAR(tar21gl),
			GVAR(srifle_dmr_06_blk),
			GVAR(ebr_blk),
			GVAR(pm_wd),
			GVAR(zubr_blk),
			GVAR(p07_blk),
			GVAR(p07_sil),
			GVAR(45acp_blk),
			GVAR(45acp_khk),
			GVAR(45acp_sil),
			GVAR(45acp_dtt),
			GVAR(45acp_dtk),
			GVAR(acpc2_blk),
			GVAR(acpc2_cla),
			GVAR(acpc2_khk),
			GVAR(acpc2_snd),
			GVAR(acpc2_sil),
			GVAR(acpc2_dta),
			GVAR(acpc2_dtb),
			GVAR(acpc2_dtr)
		};
	};
};

#include "CfgWeapons.hpp"