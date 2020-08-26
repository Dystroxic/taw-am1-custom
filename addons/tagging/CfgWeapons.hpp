class CfgWeapons {
	// Alter the ACE spraypaint cans to be lighter, since they're absurdly heavy
	class CBA_MiscItem;
	class ACE_ItemCore : CBA_MiscItem {
		class ItemInfo;
	};
	class ACE_SpraypaintBlack: ACE_ItemCore {
		class ItemInfo : ItemInfo {
			mass = 1;
		};
	};
};