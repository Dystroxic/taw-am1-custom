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