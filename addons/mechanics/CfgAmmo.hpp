class CfgAmmo {
	// Increase strobe lifetimes
	class IRStrobeBase;
	class B_IRstrobe :IRStrobeBase
	{
		timeToLive = 86400; // 24 hours in-game
	};

	class MS_Strobe_Ammo_1 : B_IRstrobe
	{
		mintimetolive = 86400; // 24 hours in-game
	};

	// Fixes for smoke bouncing

	// vanilla 40mm smoke grenades
	class SmokeShell;
	class G_40mm_Smoke : SmokeShell {
		simulation = "shotSmoke";
		deflectionSlowDown = SMOKE_GRENADE_DEFLECTION_SLOWDOWN;
		explosionTime = -1;
		timeToLive = 60;
	};

	// RHS american smoke grenades
	class SmokeShellRed;
	class rhs_40mm_m713_red : SmokeShellRed {
		simulation = "shotSmoke";
		deflectionSlowDown = SMOKE_GRENADE_DEFLECTION_SLOWDOWN;
		explosionTime = -1;
		timeToLive = 60;
	};
	class rhs_40mm_smoke_red : SmokeShellRed {
		simulation = "shotSmoke";
		deflectionSlowDown = SMOKE_GRENADE_DEFLECTION_SLOWDOWN;
		explosionTime = -1;
		timeToLive = 60;
	};

	class rhs_40mm_m714_white : SmokeShell {
		simulation = "shotSmoke";
		deflectionSlowDown = SMOKE_GRENADE_DEFLECTION_SLOWDOWN;
		explosionTime = -1;
		timeToLive = 60;
	};
	class rhs_40mm_smoke_white : SmokeShell {
		simulation = "shotSmoke";
		deflectionSlowDown = SMOKE_GRENADE_DEFLECTION_SLOWDOWN;
		explosionTime = -1;
		timeToLive = 60;
	};

	class SmokeShellGreen;
	class rhs_40mm_m715_green : SmokeShellGreen {
		simulation = "shotSmoke";
		deflectionSlowDown = SMOKE_GRENADE_DEFLECTION_SLOWDOWN;
		explosionTime = -1;
	};
	class rhs_40mm_smoke_green : SmokeShellGreen {
		simulation = "shotSmoke";
		deflectionSlowDown = SMOKE_GRENADE_DEFLECTION_SLOWDOWN;
		explosionTime = -1;
	};

	class SmokeShellYellow;
	class rhs_40mm_m716_yellow : SmokeShellYellow {
		simulation = "shotSmoke";
		deflectionSlowDown = SMOKE_GRENADE_DEFLECTION_SLOWDOWN;
		explosionTime = -1;
		timeToLive = 60;
	};
	class rhs_40mm_smoke_yellow : SmokeShellYellow {
		simulation = "shotSmoke";
		deflectionSlowDown = SMOKE_GRENADE_DEFLECTION_SLOWDOWN;
		explosionTime = -1;
		timeToLive = 60;
	};

	// RHS russian smoke grenades
	class rhs_g_vog25;
	class rhs_g_vg40md_green : rhs_g_vog25 {
		simulation = "shotSmoke";
		deflectionSlowDown = SMOKE_GRENADE_DEFLECTION_SLOWDOWN;
		explosionTime = -1;
		timeToLive = 60;
	};

	class rhs_g_vg40md_red : rhs_g_vog25 {
		simulation = "shotSmoke";
		deflectionSlowDown = SMOKE_GRENADE_DEFLECTION_SLOWDOWN;
		explosionTime = -1;
		timeToLive = 60;
	};

	class rhs_g_vg40md_white : rhs_g_vog25 {
		simulation = "shotSmoke";
		deflectionSlowDown = SMOKE_GRENADE_DEFLECTION_SLOWDOWN;
		explosionTime = -1;
		timeToLive = 60;
	};

	// Fixes for vanilla flare brightness
	class FlareBase;
	class F_40mm_White : FlareBase {
		intensity = 1250000;
		flareSize = 12;
		timeToLive = 60; // vanilla: 25
		coefGravity = 0.25; // vanilla: undefined (would be 1), Makes the ammo fall the ground slower (~2 m/s)
	};

	// Fixes for RHS flare brightness
	class F_40mm_Red;
	class F_40mm_Green;
	class rhsusf_40mm_white : F_40mm_White {
		intensity = 1250000;
		flareSize = 12;
		timeToLive = 60; // vanilla: 25
		coefGravity = 0.25; // vanilla: undefined (would be 1), Makes the ammo fall the ground slower (~2 m/s)
	};
	class rhsusf_40mm_red : F_40mm_Red {
		intensity = 1250000;
		flareSize = 12;
		timeToLive = 60; // vanilla: 25
		coefGravity = 0.25; // vanilla: undefined (would be 1), Makes the ammo fall the ground slower (~2 m/s)
	};
	class rhsusf_40mm_green : F_40mm_Green {
		intensity = 1250000;
		flareSize = 12;
		timeToLive = 60; // vanilla: 25
		coefGravity = 0.25; // vanilla: undefined (would be 1), Makes the ammo fall the ground slower (~2 m/s)
	};
	class rhs_40mm_white : F_40mm_White {
		intensity = 1250000;
		flareSize = 12;
		timeToLive = 60; // vanilla: 25
		coefGravity = 0.25; // vanilla: undefined (would be 1), Makes the ammo fall the ground slower (~2 m/s)
	};
	class rhs_40mm_red : F_40mm_Red {
		intensity = 1250000;
		flareSize = 12;
		timeToLive = 60; // vanilla: 25
		coefGravity = 0.25; // vanilla: undefined (would be 1), Makes the ammo fall the ground slower (~2 m/s)
	};
	class rhs_40mm_green : F_40mm_Green {
		intensity = 1250000;
		flareSize = 12;
		timeToLive = 60; // vanilla: 25
		coefGravity = 0.25; // vanilla: undefined (would be 1), Makes the ammo fall the ground slower (~2 m/s)
	};
};