
class RscCheckBox;
class RscText;
class RscTitle;
class RscButtonMenu;
class RscXSliderH;
class RscEdit;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscListBox;
class TAW_VDMenu
{
	idd=2900;
	name="TAW_VDMenu";
	movingEnabled=0;
	enableSimulation=1;
	onLoad="((_this select 0) displayCtrl 2999) ctrlSetFade 1; ((_this select 0) displayCtrl 2999) ctrlCommit 0;";
	class controlsBackground
	{
		class TitleBackground: RscText
		{
			colorBackground[]=
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"
			};
			idc=-1;
			x=0.30000001;
			y=0.2;
			w=0.5;
			h="(1 / 25)";
		};
		class MainBackground: RscText
		{
			colorBackground[]={0,0,0,0.69999999};
			idc=-1;
			x=0.30000001;
			y=".2 + (11 / 250)";
			w=0.5;
			h=".57 - (22 / 250)";
		};
		class Title: RscTitle
		{
			colorBackround[]={0,0,0,0};
			idc=-1;
			text="View Settings (ADDON)";
			x=0.30000001;
			y=0.2;
			w=0.80000001;
			h="(1 / 25)";
		};
		class OnFootText: RscText
		{
			idc=-1;
			text="Infantry:";
			x=0.31999999;
			y=0.25799999;
			w=0.27500001;
			h=0.039999999;
		};
		class inCarText: OnFootText
		{
			text="Ground:";
			y=0.30500001;
		};
		class inAirText: OnFootText
		{
			text="Air:";
			y=0.35499999;
		};
		class ObjectText: OnFootText
		{
			text="Object:";
			y=0.65499997;
		};
		class DroneText: OnFootText
		{
			text="Drone:";
			y=0.405;
		};
		class TerrainBackground: TitleBackground
		{
			text="Grass Settings";
			shadow=0;
			y=0.46000001;
		};
		class ObjectBackground: TitleBackground
		{
			text="Object Settings";
			y=0.55000001;
		};
		class ButtonClose: RscButtonMenu
		{
			idc=-1;
			text="Close";
			onButtonClick="closeDialog 0;";
			x=0.30000001;
			y="0.77 - (1 / 25)";
			w="(6.25 / 40)";
			h="(1 / 25)";
		};
		class SaveManagerBtn: ButtonClose
		{
			text="Saves";
			onButtonClick="[] call tawvd_fnc_openSaveManager;";
			x=0.465;
		};
	};
	class controls
	{
		class VD_onFoot_slider: RscXSliderH
		{
			idc=2901;
			text="";
			onSliderPosChanged="[0, _this select 1] call TAWVD_fnc_onSliderChanged;";
			toolTip="View Distance while on foot";
			x=0.41999999;
			y=".30 - (1 / 25)";
			w="9 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class VD_inCar_slider: VD_onFoot_slider
		{
			idc=2911;
			toolTip="View distance while in a ground vehicle";
			onSliderPosChanged="[1, _this select 1] call TAWVD_fnc_onSliderChanged;";
			y=".35 - (1 / 25)";
		};
		class VD_inAir_slider: VD_onFoot_slider
		{
			idc=2921;
			toolTip="View distance while in an aircraft";
			onSliderPosChanged="[2, _this select 1] call TAWVD_fnc_onSliderChanged;";
			y=".40 - (1 / 25)";
		};
		class VD_Object_slider: VD_onFoot_slider
		{
			idc=2941;
			toolTip="Object rendering distance";
			onSliderPosChanged="[3, _this select 1] call TAWVD_fnc_onSliderChanged;";
			y=".7 - (1 / 25)";
		};
		class VD_Drone_slider: VD_onFoot_slider
		{
			idc=2951;
			toolTip="View distance while operating a UAV/UGV";
			onSliderPosChanged="[4, _this select 1] call TAWVD_fnc_onSliderChanged;";
			y=".45 - (1 / 25)";
		};
		class VD_onFoot_Edit: RscEdit
		{
			idc=2902;
			text="";
			onKeyUp="[_this select 0, _this select 1, 'ground',true] call TAWVD_fnc_onChar;";
			x=0.69999999;
			y=0.25799999;
			w=0.079999998;
			h=0.039999999;
		};
		class VD_inCar_Edit: VD_onFoot_Edit
		{
			idc=2912;
			onKeyUp="[_this select 0, _this select 1, 'vehicle',true] call TAWVD_fnc_onChar;";
			y=0.31;
		};
		class VD_inAir_Edit: VD_onFoot_Edit
		{
			idc=2922;
			onKeyUp="[_this select 0, _this select 1, 'air',true] call TAWVD_fnc_onChar;";
			y=0.36000001;
		};
		class VD_inDrone_Edit: VD_onFoot_Edit
		{
			idc=2952;
			onKeyUp="[_this select 0, _this select 1, 'drone',true] call TAWVD_fnc_onChar;";
			y=0.41;
		};
		class VD_Object_Edit: VD_onFoot_Edit
		{
			idc=2942;
			onKeyUp="[_this select 0, _this select 1, 'object',true] call TAWVD_fnc_onChar;";
			y=0.65600002;
		};
		class VD_terrain_none
		{
			idc=2950;
			type=11;
			style=0;
			font="PuristaLight";
			color[]={1,1,1,1};
			colorActive[]={1,0.2,0.2,1};
			colorDisabled[]={0,0,0,1};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\onover",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\new1",
				0,
				0
			};
			soundClick[]=
			{
				"\A3\ui_f\data\sound\onclick",
				0.07,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\onescape",
				0.090000004,
				1
			};
			text="None";
			action="['none'] call TAWVD_fnc_onTerrainChanged;";
			sizeEx=0.039999999;
			x=0.38;
			y=0.505;
			w=0.27500001;
			h=0.039999999;
		};
		class VD_terrain_low: VD_terrain_none
		{
			idc=-1;
			text="Low";
			action="['low'] call TAWVD_fnc_onTerrainChanged;";
			x=0.47;
		};
		class VD_terrain_normal: VD_terrain_none
		{
			idc=-1;
			text="Normal";
			action="['norm'] call TAWVD_fnc_onTerrainChanged;";
			x=0.56;
		};
		class VD_terrain_high: VD_terrain_none
		{
			idc=-1;
			text="High";
			action="['high'] call TAWVD_fnc_onTerrainChanged;";
			x=0.67000002;
		};
		class ObjectSyncCheckbox: RscCheckBox
		{
			idc=2931;
			x=0.31999999;
			y=0.60000002;
			tooltip="Sync object rendering with view rendering";
			onCheckedChanged="if((_this select 1) == 1) then {tawvd_syncObject = true;ctrlEnable [2941,false]; ctrlEnable [2942,false];} else {tawvd_syncObject = false; ctrlEnable [2942,true]; ctrlEnable [2941,true];};";
			w="1 * (((safezoneW / safezoneH) min 1.2)/ 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)";
		};
		class ObjectSynctext: RscText
		{
			idc=-1;
			text="Sync with view";
			x=0.345;
			y=0.59600002;
			w=0.34999999;
			h=0.039999999;
		};
		class Manager: RscControlsGroup
		{
			idc=2999;
			x=-0.20999999;
			y=0.2;
			w=0.5;
			h=3;
			class Controls
			{
				class SaveLoadGroup: RscControlsGroupNoScrollbars
				{
					idc=3000;
					x=0;
					y=0;
					w=0.5;
					h=3;
					class Controls
					{
						class MyTitleBackground: RscText
						{
							colorBackground[]=
							{
								"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])",
								"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])",
								"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",
								"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"
							};
							idc=-1;
							x=0;
							y=0;
							w=0.5;
							h="(1 / 25)";
						};
						class Title: RscTitle
						{
							colorBackround[]={0,0,0,0};
							idc=-1;
							text="Save Manager";
							x=0;
							y=0;
							w=0.80000001;
							h="(1 / 25)";
						};
						class MainBackground: RscText
						{
							colorBackground[]={0,0,0,0.69999999};
							idc=-1;
							x=0;
							y="0 + (11 / 250)";
							w=0.5;
							h=".57 - (22 / 250)";
						};
						class SaveList: RscListBox
						{
							idc=3001;
							sizeEx=0.039999999;
							colorBackground[]={0.1,0.1,0.1,0.89999998};
							x=0;
							y="0 + (11 / 250)";
							w=0.5;
							h=".49 - (22 / 250)";
							onLBSelChanged="_this call TAWVD_fnc_onSaveSelectionChanged;";
						};
						class SaveSlotName: VD_onFoot_Edit
						{
							idc=3002;
							text="SAVE NAME";
							colorBackground[]={0,0,0,0.60000002};
							onKeyUp="";
							x=0.025;
							y=".42 + (11 / 250)";
							w=0.44999999;
						};
						class SaveButton: RscButtonMenu
						{
							text="Save";
							onButtonClick="[] call TAWVD_fnc_onSavePressed;";
							x=0;
							y="0.57 - (1 / 25)";
							w="(6.25 / 40)";
							h="(1 / 25)";
						};
						class HideButton: RscButtonMenu
						{
							text="Hide";
							onButtonClick="((findDisplay 2900) displayCtrl 2999) ctrlSetFade 1; ((findDisplay 2900) displayCtrl 2999) ctrlCommit 0.3;";
							x=0.16;
							y="0.57 - (1 / 25)";
							w="(6.25 / 40)";
							h="(1 / 25)";
						};
					};
				};
			};
		};
	};
};
