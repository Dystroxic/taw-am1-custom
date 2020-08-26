/*
For using custom mark-on-map functionality:

- mapText attribute is required. %1 in the string will be replaced by the player's name, %2 will be replaced by a unique incrementing ID (e.g. "Point %2" will result in marks named "Point 1", "Point 2", etc.)
- mapColor defines the color to use for the map marker (defaults to "ColorBlack")
- mapIcon defines the icon to use for the map marker (defaults to "hd_dot")
*/

class ACE_Tags {
	// Override the default ACE tags so we can customize them
	class Default;
	class ACE_XBlack: Default {
		displayName = "X (Black) - Point";
		mapText = "Point %2";
		mapColor = "ColorBlack";
		mapIcon = "hd_dot";
	};

	class ACE_XRed: Default {
		displayName = "X (Red) - Destroy";
		mapText = "Destroy";
		mapColor = "ColorRed";
		mapIcon = "hd_destroy";
	};

	class ACE_XGreen: Default {
		displayName = "X (Green) - Cleared";
		mapText = "Cleared";
		mapColor = "ColorGreen";
		mapIcon = "hd_dot";
	};

	class ACE_XBlue: Default {
		displayName = "X (Blue) - For Pickup";
		mapText = "Item for Pickup";
		mapColor = "ColorBlue";
		mapIcon = "hd_pickup";
	};
};