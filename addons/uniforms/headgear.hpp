// Headgear
class H_Booniehat_indp;
class GVAR(boonie): H_Booniehat_indp 
{
	author = "SillyGhillie, Blackbox";
	displayName = "Booniehat (M90X)";
	picture = "\A3\characters_f\data\ui\icon_h_booniehat_indp_ca.paa";
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_boonie_a.paa)};
};

class H_Booniehat_khk_hs;
class GVAR(boonie_hs): H_Booniehat_khk_hs 
{
	author = "SillyGhillie, Blackbox";
	displayName = "Booniehat (M90X/Headset)";
	picture = "\A3\characters_f_epb\data\ui\icon_booniehat_hs_ca.paa";
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
	picture = QPATHTOF(assets\icon_H_Cap_usblack_ca.paa);
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_bcap.paa)};
};

class GVAR(bcap_blk): H_Cap_oli 
{
	author="Blackbox, KetsuCorp";
	displayName = "Cap (BLK)";
	picture = QPATHTOF(assets\icon_H_Cap_usblack_ca.paa);
	hiddenSelectionsTextures[] = {QPATHTOF(assets\ballcap_BK_01_co.paa)};
};

class HelmetBase;
class H_Cap_headphones: HelmetBase {
	class ItemInfo;
};
class GVAR(bcap_hp): H_Cap_headphones 
{
	author = "SillyGhillie, Blackbox";
	displayName = "Cap (M90X/Headphones)";
	picture = "\A3\characters_f\data\ui\icon_H_Cap_headphones_khk_CA.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_bcap_hp.paa)};
	class ItemInfo: ItemInfo {
		hiddenSelections[] = { "camo" };
	};
};

class H_Cap_oli_hs;
class GVAR(bcap_hs): H_Cap_oli_hs 
{
	author = "SillyGhillie, Blackbox";
	displayName = "Cap (M90X/Headset)";
		picture = "\A3\characters_f_epb\data\ui\icon_cap_green_hs_ca.paa";
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_bcap.paa)};
};

class GVAR(bcap_bk_02): H_Cap_oli_hs
{
	author="Blackbox, KetsuCorp";
	displayName="Cap (BLK/Headset)";
	picture = QPATHTOF(assets\icon_h_cap_usblack_ca);
	hiddenSelections[]={"camo"};
	hiddenSelectionsTextures[]={QPATHTOF(assets\ballcap_BK_01_co.paa)};
};

class H_Bandanna_khk;
class GVAR(bandana_bk_02): H_Bandanna_khk
{
	author="Blackbox, KetsuCorp";
	displayName="Bandana (BLK)";
	picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_clean_ca.paa";
	hiddenSelections[]={"camo"};
	hiddenSelectionsTextures[]={QPATHTOF(assets\bandana_BK_01_co.paa)};
};

class H_Bandanna_khk_hs;
class GVAR(bandana_bk_01): H_Bandanna_khk_hs
{
	author="Blackbox, KetsuCorp";
	displayName="Bandana (BLK/Headset)";
	picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_clean_ca.paa";
	hiddenSelections[]={"camo"};
	hiddenSelectionsTextures[]={QPATHTOF(assets\bandana_BK_01_co.paa)};
};


class GVAR(boonie_bk_01): H_Booniehat_khk_hs
{
	author="Blackbox, KetsuCorp";
	displayName="Booniehat (BLK/Headset)";
	hiddenSelections[]={"camo"};
	hiddenSelectionsTextures[]={QPATHTOF(assets\boonie_bk_01_co.paa)};
};

class GVAR(boonie_bk_02): H_Booniehat_indp
{
	author="Blackbox, KetsuCorp";
	displayName="Booniehat (BLK)";
	hiddenSelections[]={"camo"};
	hiddenSelectionsTextures[]={QPATHTOF(assets\boonie_ck_01_co.paa)};
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