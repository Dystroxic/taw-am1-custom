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
};