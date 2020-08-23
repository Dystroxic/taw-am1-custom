// Units for uniforms
class B_soldier_F;
class GVAR(combatFatigues_fullCamo_b): B_soldier_F 
{
	author = "Blackbox";
	displayName = "Rifleman (M90X)"; 
	uniformClass = QGVAR(combatFatigues_fullCamo); 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_fullCamo.paa)};
	hiddenSelectionsMaterials[] = {QPATHTOF(assets\crye_g3.rvmat)};
};

class GVAR(combatFatigues_greenShirt_b): GVAR(combatFatigues_fullCamo_b) 
{
	displayName = "Rifleman (M90X/RGR)"; 
	uniformClass = QGVAR(combatFatigues_greenShirt); 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_greenShirt.paa)};
};

class GVAR(combatFatigues_tanShirt_b): GVAR(combatFatigues_fullCamo_b) 
{
	displayName = "Rifleman (M90X/FDE)"; 
	uniformClass = QGVAR(combatFatigues_tanShirt); 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_tanShirt.paa)};
};

class GVAR(combatFatigues_greyShirt_b): GVAR(combatFatigues_fullCamo_b) 
{
	displayName = "Rifleman (M90X/WG)"; 
	uniformClass = QGVAR(combatFatigues_greyShirt); 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_greyShirt.paa)};
};

class GVAR(combatFatigues_blackShirt_b): GVAR(combatFatigues_fullCamo_b) 
{
	displayName = "Rifleman (M90X/BLK)"; 
	uniformClass = QGVAR(combatFatigues_blackShirt); 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_blackShirt.paa)};
};


// Rolled sleeves units
class GVAR(combatFatigues_fullCamo_rs_b): B_soldier_F
{
	displayName = "Rifleman (M90X) (Rolled)"; 
	uniformClass = QGVAR(combatFatigues_fullCamo_rs); 
	model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_fullcamo.paa)};
	hiddenSelectionsMaterials[] = {QPATHTOF(assets\crye_g3.rvmat)};
};

class GVAR(combatFatigues_greenShirt_rs_b): GVAR(combatFatigues_fullCamo_rs_b) 
{
	displayName = "Rifleman (M90X/RGR) (Rolled)"; 
	uniformClass = QGVAR(combatFatigues_greenShirt_rs); 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_greenshirt.paa)};
};

class GVAR(combatFatigues_tanShirt_rs_b): GVAR(combatFatigues_fullCamo_rs_b) 
{
	displayName = "Rifleman (M90X/FDE) (Rolled)"; 
	uniformClass = QGVAR(combatFatigues_tanShirt_rs); 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_tanshirt.paa)};
};

class GVAR(combatFatigues_greyShirt_rs_b): GVAR(combatFatigues_fullCamo_rs_b) 
{
	displayName = "Rifleman (M90X/WG) (Rolled)"; 
	uniformClass = QGVAR(combatFatigues_greyShirt_rs); 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_greyshirt.paa)};
};

class GVAR(combatFatigues_blackShirt_rs_b): GVAR(combatFatigues_fullCamo_rs_b) 
{
	displayName = "Rifleman (M90X/BLK) (Rolled)"; 
	uniformClass = QGVAR(combatFatigues_blackShirt_rs); 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_blackshirt.paa)};
};


// T-Shirt units
class GVAR(combatFatigues_fullCamo_ts_b): B_soldier_F
{
	displayName = "Rifleman (M90X/BLK) (Tee)"; 
	uniformClass = QGVAR(combatFatigues_fullCamo_ts);
	model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
	hiddenSelections[] = {"Camo","Camo2","Insignia"}; 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_fullCamo.paa),QPATHTOF(assets\basicbody_black_co.paa)};
	hiddenSelectionsMaterials[] = {QPATHTOF(assets\crye_g3.rvmat),QPATHTOF(assets\crye_g3_Tshirt.rvmat)};
};

class GVAR(combatFatigues_greyShirt_ts_b): GVAR(combatFatigues_fullCamo_ts_b) 
{
	displayName = "Rifleman (M90X/WG) (Tee)"; 
	uniformClass = QGVAR(combatFatigues_greyShirt_ts); 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_fullCamo.paa),QPATHTOF(assets\basicbody_grey_co.paa)};
};

class GVAR(combatFatigues_greenShirt_ts_b): GVAR(combatFatigues_fullCamo_ts_b) 
{
	displayName = "Rifleman (M90X/RGR) (Tee)"; 
	uniformClass = QGVAR(combatFatigues_greenShirt_ts); 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_fullCamo.paa),QPATHTOF(assets\basicbody_od_co.paa)};
};

class GVAR(combatFatigues_tanShirt_ts_b): GVAR(combatFatigues_fullCamo_ts_b) 
{
	displayName = "Rifleman (M90X/FDE) (Tee)"; 
	uniformClass = QGVAR(combatFatigues_tanShirt_ts); 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_fatigues_fullCamo.paa),QPATHTOF(assets\basicbody_tan_co.paa)};
};


// Polo
class I_G_Story_Protagonist_F;
class GVAR(combatFatigues_polo_b): I_G_Story_Protagonist_F
{
	displayName = "Rifleman (M90X/Polo)"; 
	uniformClass = QGVAR(combatFatigues_polo); 
	model = "\A3\characters_f_epb\guerrilla\ig_guerrilla5_1.p3d";
	hiddenSelections[] = {"Camo1","Camo2","Insignia"}; 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\guerilla_redo.paa),QPATHTOF(assets\clothing2_co)};
	hiddenSelectionsMaterials[] = {QPATHTOF(assets\crye_g3.rvmat),QPATHTOF(assets\crye_g3_tshirt.rvmat)};
};


// Coveralls
class B_helicrew_F;
class GVAR(coveralls_guardian_b): B_helicrew_F
{
	displayName = "Rifleman (M90X) (Aviation)"; 
	uniformClass = QGVAR(coveralls_guardian); 
	model = "\A3\characters_f\common\coveralls.p3d";
	hiddenSelections[] = {"Camo","Insignia"}; 
	hiddenSelectionsTextures[] = {QPATHTOF(assets\taw_uniform_coveralls_guardian.paa)};
};