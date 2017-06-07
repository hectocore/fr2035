class CfgPatches
{
	class FR2035_Supplies_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Ammoboxes and Supplies";
		url="http://modflavors.com";
		requiredAddons[]=
		{
			"FR2035_Data_F",
			"A3_Weapons_F"
		};
		requiredVersion=1.66;
		units[]={
			"B_FR2035_AssaultPack_ce",
			"B_FR2035_AssaultPack_ce_LAT",
			"B_FR2035_AssaultPack_ce_Medic",
			"B_FR2035_AssaultPack_ce_Repair",
			"B_FR2035_AssaultPack_ce_ReconLAT",
			"B_FR2035_AssaultPack_ce_ReconMedic",
			"B_FR2035_AssaultPack_ce_CTRGMedic_F",
			"B_FR2035_AssaultPack_ce_CTRGLAT_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_AssaultPack_Base;
	class B_FR2035_AssaultPack_ce: B_AssaultPack_Base
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce";
		scope=2;
		displayName="$STR_FR2035_AssaultPack_ce";
		picture="\fr2035_supplies_f\data\ui\fr2035_icon_b_compact_ce_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_supplies_f\data\fr2035_backpack_compact_ce_co.paa"
		};
	};
	class B_FR2035_AssaultPack_ce_LAT: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_LAT";
		scope=1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=2;
			};
		};
	};
	class B_FR2035_AssaultPack_ce_Medic: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_Medic";
		scope=1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class B_FR2035_AssaultPack_ce_Repair: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_Repair";
		scope=1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
	class B_FR2035_AssaultPack_ce_ReconLAT: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_ReconLAT";
		scope=1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=2;
			};
		};
	};
	class B_FR2035_AssaultPack_ce_ReconMedic: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_ReconMedic";
		scope=1;
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=1;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=1;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=5;
			};
		};
	};
	class B_FR2035_AssaultPack_ce_CTRGMedic_F: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_CTRGMedic_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=1;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=1;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=5;
			};
		};
	};
	class B_FR2035_AssaultPack_ce_CTRGLAT_F: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_CTRGLAT_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=2;
			};
		};
	};
};
