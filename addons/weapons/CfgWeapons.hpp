class cfgWeapons {
	class launch_RPG32_F;
	class ItemCore;
	class hgun_ACPC2_F;
	class hgun_Pistol_heavy_01_F;
	class hgun_Pistol_heavy_02_F;
	class hgun_Pistol_01_F;
	class arifle_Mk20_F;
	class arifle_Mk20C_F;
	class arifle_Mk20_GL_F;
	class hgun_P07_F;
	class arifle_TRG21_F;
	class arifle_TRG20_F;
	class arifle_TRG21_GL_F;
	class srifle_DMR_06_olive_F;
	class srifle_EBR_F;

	class GVAR(rbg_32_c): launch_RPG32_F
	{
		author="Blackbox";
		displayName="RPG-32 (M90X)";
		baseWeapon=QGVAR(rbg_32_c);
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\rpg_32_c.paa),
			"\a3\weapons_f\launchers\rpg32\data\rpg_32_optics_co.paa"
		};
	};

	class GVAR(rbg_32_gy): launch_RPG32_F
	{
		author="Blackbox";
		displayName="RPG-32 (Grey)";
		baseWeapon=QGVAR(rbg_32_gy);
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\rpg_32_gy.paa),
			"\a3\weapons_f\launchers\rpg32\data\rpg_32_optics_co.paa"
		};
	};
	
	class GVAR(f2000_bk): arifle_Mk20_F
	{
		author="Blackbox";
		displayName="F2000 (Black)";
		baseWeapon=QGVAR(f2000_bk);
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\f2000_gy.paa)
		};
	};

	class GVAR(f2000c_bk): arifle_Mk20C_F
	{
		author="Blackbox";
		displayName="F2000 Tactical (Black)";
		baseWeapon=QGVAR(f2000c_bk);
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\f2000_gy.paa)
		};
	};
	
	class GVAR(f2000gl_bk): arifle_Mk20_GL_F
	{
		author="Blackbox";
		displayName="F2000 EGLM (Black)";
		baseWeapon=QGVAR(f2000gl_bk);
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\f2000_gy.paa),
			"\a3\weapons_f_beta\rifles\mk20\data\mk20_utilities_co.paa"
		};
	};

	class GVAR(tar21_blk): arifle_TRG21_F
	{
		author="Blackbox";
		displayName="TAR-21 (Black)";
		baseWeapon=QGVAR(tar21_blk);
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\tar21_gy.paa)
		};
	};

	class GVAR(tar21c_blk): arifle_TRG20_F
	{
		author="Blackbox";
		displayName="CTAR-21 (Black)";
		baseWeapon=QGVAR(tar21c_blk);
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\tar21_gy.paa)
		};
	};

	class GVAR(tar21gl): arifle_TRG21_GL_F
	{
		author="Blackbox";
		displayName="GTAR-21 EGLM (Black)";
		baseWeapon=QGVAR(tar21gl);
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\tar21_gy.paa),
			"\a3\weapons_f\rifles\trg20\data\tar21_eglm_co.paa",
			"\a3\weapons_f\data\gl_holo_co.paa"
		};
	};

	class GVAR(srifle_dmr_06_blk): srifle_DMR_06_olive_F
	{
		author = "Constance";
		displayName = "M14 (Black)";
		baseWeapon = QGVAR(srifle_dmr_06_blk);
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\dmr_06_01_black_co.paa),
			PATHTOF(assets\dmr_06_02_black_co.paa)
		};
	};

	class GVAR(ebr_blk): srifle_EBR_F
	{
		author = "Constance";
		displayName = "Mk14 EBR (Black)";
		baseWeapon = QGVAR(ebr_blk);
		hiddenSelectionsTextures[] = {
			PATHTOF(assets\ebr01_black_co.paa),
			PATHTOF(assets\ebr02_black_co.paa)
		};
	};

	class GVAR(pm_wd): hgun_Pistol_01_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "Makarov PM (Wood)";
		hiddenSelections[]={"camo"};
		baseweapon = QGVAR(pm_wd);
		hiddenSelectionsTextures[] = {PATHTOF(assets\pm_wd.paa)};
	};

	class GVAR(p99_gy): hgun_P07_F
	{
		author="Blackbox";
		displayName="P99 (Grey)";
		baseWeapon=QGVAR(p99_gy);
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\p99_gy.paa)
		};
	};

	class GVAR(p99_wh): hgun_P07_F
	{
		author="Blackbox";
		displayName="P99 (White)";
		baseWeapon=QGVAR(p99_wh);
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\p99_wh.paa)
		};
	};

	class GVAR(p07_blk): hgun_P07_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "P99 (Black)";
		baseweapon = QGVAR(p07_blk);
		hiddenSelectionsTextures[] = {PATHTOF(assets\p07_blk.paa)};
	};

	class GVAR(p07_sil): hgun_P07_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "P99 (Silver)";
		baseweapon = QGVAR(p07_sil);
		hiddenSelectionsTextures[] = {PATHTOF(assets\p07_sil.paa)};
	};

	class GVAR(45acp_blk): hgun_Pistol_heavy_01_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "FNX-45 Tactical (Black)";
		baseweapon = QGVAR(45acp_blk);
		hiddenSelectionsTextures[] = {PATHTOF(assets\45_blk.paa)};
	};

	class GVAR(45acp_khk): hgun_Pistol_heavy_01_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "FNX-45 Tactical (Khaki)";
		baseweapon = QGVAR(45acp_khk);
		hiddenSelectionsTextures[] = {PATHTOF(assets\45_khk.paa)};
	};

	class GVAR(45acp_sil): hgun_Pistol_heavy_01_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "FNX-45 Tactical (Silver)";
		baseweapon = QGVAR(45acp_sil);
		hiddenSelectionsTextures[] = {PATHTOF(assets\45_sil.paa)};
	};

	class GVAR(45acp_dtt): hgun_Pistol_heavy_01_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "FNX-45 Tactical (2-Tone Tan)";
		baseweapon = QGVAR(45acp_dtt);
		hiddenSelectionsTextures[] = {PATHTOF(assets\45_sil_dtt.paa)};
	};

	class GVAR(45acp_dtk): hgun_Pistol_heavy_01_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "FNX-45 Tactical (2-Tone Khaki)";
		baseweapon = QGVAR(45acp_dtk);
		hiddenSelectionsTextures[] = {PATHTOF(assets\45_sil_dtk.paa)};
	};

	class GVAR(zubr_blk): hgun_Pistol_heavy_02_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "Chiappa Rhino 60DS (Black)";
		baseweapon = QGVAR(zubr_blk);
		hiddenSelectionsTextures[] = {
			PATHTOF(assets\zubr_blk.paa),
			"\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co"
		};
	};

	class GVAR(acpc2_blk): hgun_ACPC2_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "Custom Covert II (Black)";
		baseweapon = QGVAR(acpc2_blk);
		hiddenSelectionsTextures[] = {PATHTOF(assets\acp_blk.paa)};
	};

	class GVAR(acpc2_cla): hgun_ACPC2_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "Custom Covert II (Classic)";
		baseweapon = QGVAR(acpc2_cla);
		hiddenSelectionsTextures[] = {PATHTOF(assets\acp_cla.paa)};
	};

	class GVAR(acpc2_khk): hgun_ACPC2_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "Custom Covert II (Khaki)";
		baseweapon = QGVAR(acpc2_khk);
		hiddenSelectionsTextures[] = {PATHTOF(assets\acp_khk.paa)};
	};

	class GVAR(acpc2_snd): hgun_ACPC2_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "Custom Covert II (Sand)";
		baseweapon = QGVAR(acpc2_snd);
		hiddenSelectionsTextures[] = {PATHTOF(assets\acp_snd.paa)};
	};

	class GVAR(acpc2_sil): hgun_ACPC2_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "Custom Covert II (Silver)";
		baseweapon = QGVAR(acpc2_sil);
		hiddenSelectionsTextures[] = {PATHTOF(assets\acp_sil.paa)};
	};

	class GVAR(acpc2_dta): hgun_ACPC2_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "Custom Covert II (2-Tone A)";
		baseweapon = QGVAR(acpc2_dta);
		hiddenSelectionsTextures[] = {PATHTOF(assets\acp_dt1.paa)};
	};

	class GVAR(acpc2_dtb): hgun_ACPC2_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "Custom Covert II (2-Tone B)";
		baseweapon = QGVAR(acpc2_dtb);
		hiddenSelectionsTextures[] = {PATHTOF(assets\acp_dt2.paa)};
	};

	class GVAR(acpc2_dtr): hgun_ACPC2_F
	{
		author="The Wild Burgess, Blackbox";
		displayname = "Custom Covert II (2-Tone Reversed)";
		baseweapon = QGVAR(acpc2_dtr);
		hiddenSelectionsTextures[] = {PATHTOF(assets\acp_dtr.paa)};
	};
};
