class cfgWeapons {
	class UniformItem;

	// Full sleeves base class
	class Uniform_Base;
	class U_B_CombatUniform_mcam: Uniform_Base {
		class ItemInfo;
	};
	class GVAR(combatFatigues_fullCamo): U_B_CombatUniform_mcam {
		displayName = "Combat Fatigues (M90X)";
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_fullCamo_b);
		}; 
	};
	
	class GVAR(combatFatigues_greenShirt): U_B_CombatUniform_mcam 
	{ 
		displayName = "Combat Fatigues (M90X/RGR)";
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_greenShirt_b);
		};
	}; 

	class GVAR(combatFatigues_tanShirt): U_B_CombatUniform_mcam 
	{ 
		displayName = "Combat Fatigues (M90X/FDE)";
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_tanShirt_b);
		};
	};

	class GVAR(combatFatigues_greyShirt): U_B_CombatUniform_mcam 
	{ 
		displayName = "Combat Fatigues (M90X/WG)";
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_greyShirt_b);
		};
	}; 

	class GVAR(combatFatigues_blackShirt): U_B_CombatUniform_mcam 
	{ 
		displayName = "Combat Fatigues (M90X/BLK)"; 
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_blackShirt_b);
		};
	}; 

	// Rolled Sleeves base class
	class U_B_CombatUniform_mcam_vest: Uniform_Base {
		class ItemInfo;
	};
	class GVAR(combatFatigues_fullCamo_rs): U_B_CombatUniform_mcam_vest 
	{ 
		displayName = "Combat Fatigues (M90X) (Rolled)"; 
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_fullCamo_rs_b);
		};
	}; 

	class GVAR(combatFatigues_greenShirt_rs): U_B_CombatUniform_mcam_vest 
	{ 
		displayName = "Combat Fatigues (M90X/RGR) (Rolled)"; 
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_greenShirt_rs_b);
		};
	};
	
	class GVAR(combatFatigues_tanShirt_rs): U_B_CombatUniform_mcam_vest 
	{ 
		displayName = "Combat Fatigues (M90X/FDE) (Rolled)"; 
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_tanShirt_rs_b);
		};
	}; 

	class GVAR(combatFatigues_greyShirt_rs): U_B_CombatUniform_mcam_vest 
	{ 
		displayName = "Combat Fatigues (M90X/WG) (Rolled)";  
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_greyShirt_rs_b);
		};
	}; 

	class GVAR(combatFatigues_blackShirt_rs): U_B_CombatUniform_mcam_vest 
	{ 
		displayName = "Combat Fatigues (M90X/BLK) (Rolled)";  
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_blackShirt_rs_b);
		};
	}; 

	// TShirt base class
	class U_B_CombatUniform_mcam_tshirt: Uniform_Base {
		class ItemInfo;
	};
	class GVAR(combatFatigues_fullCamo_ts): U_B_CombatUniform_mcam_tshirt 
	{ 
		displayName = "Combat Fatigues (M90X/BLK) (Tee)"; 
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_fullCamo_ts_b);
		};
	}; 

	class GVAR(combatFatigues_greyShirt_ts): U_B_CombatUniform_mcam_tshirt 
	{ 
		displayName = "Combat Fatigues (M90X/WG) (Tee)"; 
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_greyShirt_ts_b);
		};
	}; 

	class GVAR(combatFatigues_greenShirt_ts): U_B_CombatUniform_mcam_tshirt 
	{ 
		displayName = "Combat Fatigues (M90X/RGR) (Tee)"; 
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_greenShirt_ts_b);
		};
	}; 

	class GVAR(combatFatigues_tanShirt_ts): U_B_CombatUniform_mcam_tshirt 
	{ 
		displayName = "Combat Fatigues (M90X/FDE) (Tee)"; 
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_tanShirt_ts_b);
		};
	}; 

	class U_I_G_Story_Protagonist_F: Uniform_Base {
		class ItemInfo;
	};
	class GVAR(combatFatigues_polo): U_I_G_Story_Protagonist_F 
	{ 
        displayName = "Combat Fatigues (M90X/Polo)"; 
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(combatFatigues_polo_b);
		};
	};

	class U_B_HeliPilotCoveralls: Uniform_Base {
		class ItemInfo;
	};
	class GVAR(coveralls_guardian): U_B_HeliPilotCoveralls { 
        displayName = "Coveralls (M90X) (Aviation)"; 
		class ItemInfo : ItemInfo { 
			uniformClass = QGVAR(coveralls_guardian_b);
		};
    };

	// Headgear
	class H_Booniehat_indp;
	class GVAR(boonie): H_Booniehat_indp 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Booniehat (M90X)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_boonie_a.paa)};
	};

	class H_Booniehat_khk_hs;
	class GVAR(boonie_hs): H_Booniehat_khk_hs 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Booniehat (M90X/Headset)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_boonie_a.paa)};
	};

	class H_MilCap_dgtl;
	class GVAR(pcap): H_MilCap_dgtl 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Patrol Cap (M90X/Headset)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_pcap.paa)};
	};
	
	class H_Cap_oli;
	class GVAR(bcap): H_Cap_oli 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Cap (M90X)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_bcap.paa)};
	};
	
	class H_Cap_headphones;
	class GVAR(bcap_hp): H_Cap_headphones 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Cap (M90X/Headphones)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_bcap_hp.paa)};
	};

	class H_Cap_oli_hs;
	class GVAR(bcap_hs): H_Cap_oli_hs 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Cap (M90X/Headset)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_bcap.paa)};
	};

	class H_HelmetSpecB;
	class GVAR(ech): H_HelmetSpecB 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Enhanced Combat Helmet (M90X)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_h_ech.paa)};
	};

	class GVAR(ech_cls): H_HelmetSpecB 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Enhanced Combat Helmet (M90X/CLS)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_h_cls.paa)};
	};

	class GVAR(ech_fl): H_HelmetSpecB 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Enhanced Combat Helmet (M90X/FL)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_h_fl.paa)};
	};

	class GVAR(ech_sl): H_HelmetSpecB 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Enhanced Combat Helmet (M90X/SL)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_h_sl.paa)};
	};

	class GVAR(ech_pl): H_HelmetSpecB 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Enhanced Combat Helmet (M90X/PL)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_h_pl.paa)};
	};

	class GVAR(ech_med3): H_HelmetSpecB 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Enhanced Combat Helmet (M90X/Doctor)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_h_med3.paa)};
	};

	class GVAR(ech_eng): H_HelmetSpecB 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Enhanced Combat Helmet (M90X/Engineer)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_h_engi.paa)};
	};

	class H_HelmetB_light;
	class GVAR(lch): H_HelmetB_light {
		author = "SillyGhillie, Blackbox";
		displayName = "Lightweight Combat Helmet (M90X)";
		picture = "\A3\characters_f\data\ui\icon_H_HelmetB_light_black_ca";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\lch_taw.paa)};
	};

	class GVAR(lch_blk): H_HelmetB_light {
		author = "SillyGhillie, Blackbox";
		displayName = "Lightweight Combat Helmet (BLK)";
		picture = "\A3\characters_f\data\ui\icon_H_HelmetB_light_black_ca";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\lch_blk.paa)};
	};

	class GVAR(lch_wg): H_HelmetB_light {
		author = "SillyGhillie, Blackbox";
		displayName = "Lightweight Combat Helmet (WG)";
		picture = "\A3\characters_f\data\ui\icon_H_HelmetB_light_black_ca";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\lch_wg.paa)};
	};

	class GVAR(lch_rgr): H_HelmetB_light {
		author = "SillyGhillie, Blackbox";
		displayName = "Lightweight Combat Helmet (RGR)";
		picture = "\A3\characters_f\data\ui\icon_H_HelmetB_light_black_ca";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\lch_rgr.paa)};
	};

	class GVAR(lch_fde): H_HelmetB_light {
		author = "SillyGhillie, Blackbox";
		displayName = "Lightweight Combat Helmet (FDE)";
		picture = "\A3\characters_f\data\ui\icon_H_HelmetB_light_black_ca";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\lch_fde.paa)};
	};

	class H_HelmetB;
	class GVAR(ach): H_HelmetB {
		author = "SillyGhillie, Blackbox";
		displayName = "Combat Helmet (M90X)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_h_ech.paa)};
	};

	class H_HelmetB_camo;
	class GVAR(ach_arid): H_HelmetB_camo
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Combat Helmet (M90X/Arid Camo)";
		hiddenSelectionsTextures[] = {
			PATHTOF(assets\taw_h_ech.paa),
			PATHTOF(assets\ghillie_arid.paa)
		};
	};

	class GVAR(ach_wood): H_HelmetB_camo
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Combat Helmet (M90X/Woodland Camo)";
		hiddenSelectionsTextures[] = {
			PATHTOF(assets\taw_h_ech.paa),
			PATHTOF(assets\ghillie_woodland.paa)
		};
	};	

	class H_HelmetB_TI_tna_F;
	class GVAR(stealth): H_HelmetB_TI_tna_F 
	{
		author = "SillyGhillie, Blackbox";
		displayName = "Stealth Combat Helmet (M90X)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_h_stealth.paa)};
	};

	class H_HelmetCrew_I;
	class GVAR(acvc): H_HelmetCrew_I
	{
		author = "Blackbox";
		displayName = "Crew Helmet (BLK)";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_crewhelmet_bk.paa)};
	};	

	class H_HelmetHBK_base_F;
	class GVAR(contact): H_HelmetHBK_base_F
	{
		author="Constance68W";
		scope=2;
		displayName="Advanced Helmet Mk2";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\contact_helmet.paa)};
	};

	class H_HelmetHBK_headset_F;
	class GVAR(contact_peltor): H_HelmetHBK_headset_F
	{
		author="Constance68W";
		displayName="Advanced Helmet Mk2 w/ Peltor";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\contact_helmet.paa)};
	};

	class H_HelmetHBK_chops_F;
	class GVAR(contact_chops): H_HelmetHBK_chops_F
	{
		author="Constance68W";
		displayName="Advanced Helmet Mk2 w/ Chops";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\contact_helmet.paa)};
	};

	class H_HelmetHBK_ear_F;
	class GVAR(contact_earguard): H_HelmetHBK_ear_F
	{
		author="Constance68W";
		displayName="Advanced Helmet Mk2 w/ Earguard";
		hiddenSelectionsTextures[] = {QPATHTOF(assets\contact_helmet.paa)};
	};
};
