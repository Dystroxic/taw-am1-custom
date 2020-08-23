class Bag_Base;
class B_Carryall_mcamo;
class GVAR(Carryall): B_Carryall_mcamo 
{
	author = "SillyGhillie, Blackbox";
	displayName = "Carryall Backpack (M90X)";
	picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Tortila_blk.paa";
	hiddenSelectionsTextures[]={PATHTOF(assets\taw_carryall.paa)};
};

class B_AssaultPack_mcamo;
class GVAR(AssaultPack): B_AssaultPack_mcamo
{
	author = "SillyGhillie, Blackbox";
	displayName = "Assault Pack (M90X)";
	picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_blk_ca.paa";
	hiddenSelectionsTextures[]={PATHTOF(assets\taw_assaultpack.paa)};
};

class B_AssaultPack_Kerry;
class GVAR(assaultpack_bk_02): B_AssaultPack_Kerry
{
	author="Blackbox, KetsuCorp";
	hiddenSelections[]=
	{
		"camo",
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		QPATHTOF(assets\assaultpack_bk_02_co.paa),
		QPATHTOF(assets\assaultpack_bk_01_co.paa),
		QPATHTOF(assets\assaultpack_bk_02_co.paa)
	};
	displayName="Assault Pack (BLK/Gear)";
};

class GVAR(assaultpack_m90x_gear): B_AssaultPack_Kerry
{
	author="Blackbox, KetsuCorp";
	picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_blk_ca.paa";
	hiddenSelections[]=
	{
		"camo",
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		QPATHTOF(assets\assaultpack_bk_02_co.paa),
		QPATHTOF(assets\taw_assaultpack.paa),
		QPATHTOF(assets\assaultpack_bk_02_co.paa)
	};
	displayName="Assault Pack (M90X/Gear)";
};

class GVAR(backbelt_bk_01): Bag_Base
{
	scope=2;
	author="Blackbox, KetsuCorp";
	picture="\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
	model="\A3\Characters_F\BLUFOR\equip_b_belt";
	hiddenSelections[]={"camo"};
	hiddenSelectionsTextures[]=
	{
		QPATHTOF(assets\platecarrier_bk_01_co.paa)
	};
	displayName="Combat Belt (BLK)";
	maximumLoad = 40;
	mass = 5;
};

class B_Kitbag_mcamo;
class GVAR(Kitbag): B_Kitbag_mcamo
{
	author = "SillyGhillie, Blackbox";
	displayName = "Kitbag (M90X)";
	picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr.paa";
	hiddenSelectionsTextures[]={PATHTOF(assets\taw_kitbag.paa)};
};