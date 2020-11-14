#include "BIS_AddonInfo.hpp"
// French Army 2035 Mod
// Made for Arma 3
// Made by Hector Corral
// In order to use the content of this addon in your own mod, please contact me on steam.

class CfgPatches
{
	class FR2035_armor_F
	{
		units[]=
		{
			"FR2035_APC_Wheeled_01_cannon_F",
			"FR2035_APC_Tracked_01_rcws_F",
			"FR2035_APC_Tracked_01_CRV_F",
			"FR2035_APC_Tracked_01_AA_F",
			"FR2035_MBT_01_cannon_F",
			"FR2035_MBT_01_TUSK_F",
			"FR2035_MBT_01_arty_F",
			"FR2035_MBT_01_mlrs_F"
		};
		weapons[]={};
		requiredVersion=1.56;
		requiredAddons[]=
		{
			"FR2035_characters_F",
			"FR2035_data_F",
			"FR2035_language_F",
			"FR2035_soft_f"
		};
		version="17-02-2016";
		author="$STR_fr2035_author";
	};
};

class CfgVehicles
{
	class B_APC_Wheeled_01_cannon_F;
	class B_APC_Tracked_01_rcws_F;
	class B_APC_Tracked_01_CRV_F;
	class B_APC_Tracked_01_AA_F;
	class B_MBT_01_cannon_F;
	class B_MBT_01_TUSK_F;
	class B_MBT_01_arty_F;
	class B_MBT_01_mlrs_F;
	
	class FR2035_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_cannon_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_APC_Wheeled_01_cannon_F";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_soldier_F"
		};
		faction="FR2035_F";
		class TransportWeapons
		{
			class _xx_arifle_FR2035_MX_F
			{
				weapon="arifle_FR2035_MX_F";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_amv_base_co.paa",
			"\fr2035_armor_f\data\fr2035_amv_adds_co.paa",
			"\fr2035_armor_f\data\fr2035_amv_turret_co.paa"
		};
	};
	class FR2035_APC_Tracked_01_rcws_F: B_APC_Tracked_01_rcws_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_APC_Tracked_01_rcws_F";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		class TransportWeapons
		{
			class _xx_arifle_FR2035_MX_F
			{
				weapon="arifle_FR2035_MX_F";
				count=2;
			};
			class _xx_arifle_FR2035_MX_SW_F
			{
				weapon="arifle_FR2035_MX_SW_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_apc_base_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_base_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_turret_co.paa"
		};
	};
	class FR2035_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_APC_Tracked_01_CRV_F";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Engineer_F"
		};
		faction="FR2035_F";
		class TransportWeapons
		{
			class _xx_arifle_FR2035_MX_F
			{
				weapon="arifle_FR2035_MX_F";
				count=2;
			};
			class _xx_arifle_FR2035_MX_SW_F
			{
				weapon="arifle_FR2035_MX_SW_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_apc_base_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_base_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_turret_co.paa",
			"\fr2035_armor_f\data\fr2035_apc_adds_co.paa"
		};
	};
	class FR2035_APC_Tracked_01_AA_F: B_APC_Tracked_01_AA_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_APC_Tracked_01_AA_F";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		class TransportWeapons
		{
			class _xx_arifle_FR2035_MX_F
			{
				weapon="arifle_FR2035_MX_F";
				count=2;
			};
			class _xx_arifle_FR2035_MX_SW_F
			{
				weapon="arifle_FR2035_MX_SW_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_aa_base_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_base_co.paa",
			"\fr2035_armor_f\data\fr2035_aa_turret_co.paa"
		};
	};
	class FR2035_MBT_01_cannon_F: B_MBT_01_cannon_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_MBT_01_cannon_F";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		class TransportWeapons
		{
			class _xx_arifle_FR2035_MXC_F
			{
				weapon="arifle_FR2035_MXC_F";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_mbt_base_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_turret_co.paa"
		};
	};
	class FR2035_MBT_01_TUSK_F: B_MBT_01_TUSK_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_MBT_01_TUSK_F";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		class TransportWeapons
		{
			class _xx_arifle_FR2035_MXC_F
			{
				weapon="arifle_FR2035_MXC_F";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_mbt_base_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_turret_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_adds_co.paa"
		};
	};
	class FR2035_MBT_01_arty_F: B_MBT_01_arty_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_MBT_01_arty_F";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		class TransportWeapons
		{
			class _xx_arifle_FR2035_MXC_F
			{
				weapon="arifle_FR2035_MXC_F";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_mbt_base_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_arty_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_turret_co.paa"
		};
	};
	class FR2035_MBT_01_mlrs_F: B_MBT_01_mlrs_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_MBT_01_mlrs_F";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		class TransportWeapons
		{
			class _xx_arifle_FR2035_MXC_F
			{
				weapon="arifle_FR2035_MXC_F";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_mbt_base_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_mlrs_co.paa"
		};
	};
};

enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
}