class CfgFunctions
{
	class TAW_VD
	{
		tag="TAWVD";
		class Initialize
		{
			file=QUOTE(PATHTO_COMPONENT);
			class stateTracker
			{
				ext=".fsm";
				postInit=1;
				headerType=-1;
			};
		};
		class Functions
		{
			file=QPATHTOF(Functions);
			class onSliderChanged
			{
			};
			class onTerrainChanged
			{
			};
			class updateViewDistance
			{
			};
			class openMenu
			{
			};
			class onChar
			{
			};
			class openSaveManager
			{
			};
			class onSavePressed
			{
			};
			class onSaveSelectionChanged
			{
			};
		};
	};
};