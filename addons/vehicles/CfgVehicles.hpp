class CfgVehicles {
	class B_MRAP_01_F;
	class B_MRAP_01_hmg_F;
	class B_MRAP_01_gmg_F;
	class I_APC_Wheeled_03_cannon_F;
	class I_Heli_light_03_unarmed_F;
	class I_Heli_light_03_dynamicLoadout_F;
	class I_MRAP_03_F; 
	class I_MRAP_03_hmg_F; 
	class I_MRAP_03_gmg_F;
	class I_MBT_03_cannon_F;
	class I_Heli_Transport_02_F;
	class I_APC_tracked_03_cannon_F; 

	class GVAR(hunter): B_MRAP_01_F
	{
		author="Constance68W";
		displayName="M-ATV (Black)";
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\mrap_01_base_co.paa),
			PATHTOF(assets\mrap_01_adds_co.paa)
		};
	};

	class GVAR(hunter_hmg): B_MRAP_01_hmg_F
	{
		author="Constance68W";
		displayName="M-ATV - HMG (Black)";
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\mrap_01_base_co.paa),
			PATHTOF(assets\mrap_01_adds_co.paa),
			PATHTOF(assets\turret_co.paa)
		};
	};

	class GVAR(hunter_gmg): B_MRAP_01_gmg_F
	{
		author="Constance68W";
		displayName="M-ATV - GMG (Black)";
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\mrap_01_base_co.paa),
			PATHTOF(assets\mrap_01_adds_co.paa),
			PATHTOF(assets\turret_co.paa)
		};
	};

	class GVAR(pandur): I_APC_Wheeled_03_cannon_F
	{
		author="Constance68W";
		displayName="Pandur II (Black)";
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\taw_pandur_1.paa),
			PATHTOF(assets\taw_pandur_2.paa),
			PATHTOF(assets\taw_pandur_3.paa),
			PATHTOF(assets\taw_pandur_4.paa),
			PATHTOF(assets\taw_pandur_5.paa),
			PATHTOF(assets\taw_pandur_6.paa)
		};
	};

	class GVAR(wildcat_u): I_Heli_light_03_unarmed_F
	{
		author="Constance68W";
		displayName="AW159 Wildcat (Unarmed/Black)";
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\taw_wildcat_f.paa)
		};
	};	

    class GVAR(wildcat_a): I_Heli_light_03_dynamicLoadout_F 
	{
		author="Constance68W";
		displayName="AW159 Wildcat (Black)";
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\taw_wildcat_f.paa)
		};
	};

	class GVAR(fennek): I_MRAP_03_F    
	{
		author="Constance68W";
		displayName="Fennek (Black)";
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\taw_fennek_1.paa),
			PATHTOF(assets\taw_fennek_2.paa)
		};
	};

	class GVAR(fennek_hmg): I_MRAP_03_hmg_F    
	{
		author="Constance68W";
		displayName="Fennek (HMG/Black)";
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\taw_fennek_1.paa),
			PATHTOF(assets\taw_fennek_2.paa)
		};
	};
	
	class GVAR(fennek_gmg): I_MRAP_03_gmg_F    
	{
		author="Constance68W";
		displayName="Fennek (GMG/Black)";
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\taw_fennek_1.paa),
			PATHTOF(assets\taw_fennek_2.paa)
		};
	};

	class GVAR(leopard): I_MBT_03_cannon_F    
	{
		author="Constance68W";
		displayName="Leopard 2SG (Black)";
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\taw_leopard_1.paa),
			PATHTOF(assets\taw_leopard_2.paa),
			PATHTOF(assets\taw_leopard_3.paa)
		};
	};

	class GVAR(merlin): I_Heli_Transport_02_F    
	{
		author="Constance68W";
		displayName="AW101 Merlin (Black)";
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\taw_merlin_1.paa),
			PATHTOF(assets\taw_merlin_2.paa),
			PATHTOF(assets\taw_merlin_3.paa)
		};
	};

	class GVAR(warrior): I_APC_tracked_03_cannon_F    
	{
		author="Constance68W";
		displayName="FV510 Warrior (Black)";
		hiddenSelectionsTextures[]=
		{
			PATHTOF(assets\taw_warrior_1.paa),
			PATHTOF(assets\taw_warrior_2.paa)
		};
	};
};
