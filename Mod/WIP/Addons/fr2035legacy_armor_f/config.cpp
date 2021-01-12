/*
 Please Note:
 This is some legacy code from my older French Army 2035 Mod.
 Please do not use this as a reference, this code is old and of bad quality.
*/

class CfgPatches
{
	class FR2035legacy_armor_F
	{
		units[]=
		{
			"FR2035_APC_Tracked_01_rcws_F",
			"FR2035_APC_Tracked_01_CRV_F",
			"FR2035_APC_Tracked_01_AA_F",
			"FR2035_MBT_01_arty_F",
			"FR2035_MBT_01_mlrs_F"
		};
		weapons[]={};
		requiredVersion=1.56;
		requiredAddons[]=
		{
			"FR2035_characters_F",
			"FR2035_data_F"
		};
		version="17-02-2016";
		author="$STR_fr2035legacy_author";
	};
};

class CfgVehicles
{
	class B_APC_Tracked_01_rcws_F;
	class B_APC_Tracked_01_CRV_F;
	class B_APC_Tracked_01_AA_F;
	class B_MBT_01_arty_F;
	class B_MBT_01_mlrs_F;

	class FR2035_APC_Tracked_01_rcws_F: B_APC_Tracked_01_rcws_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_APC_Tracked_01_rcws_F";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035legacy_armor_f\data\fr2035_apc_base_co.paa",
			"\fr2035legacy_armor_f\data\fr2035_mbt_base_co.paa",
			"\fr2035_data_f\vehicles\fr2035_turret_co.paa"
		};
	};
	class FR2035_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_APC_Tracked_01_CRV_F";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Engineer_F"
		};
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035legacy_armor_f\data\fr2035_apc_base_co.paa",
			"\fr2035legacy_armor_f\data\fr2035_mbt_base_co.paa",
			"\fr2035_data_f\vehicles\fr2035_turret_co.paa",
			"\fr2035legacy_armor_f\data\fr2035_apc_adds_co.paa"
		};
	};
	class FR2035_APC_Tracked_01_AA_F: B_APC_Tracked_01_AA_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_APC_Tracked_01_AA_F";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035legacy_armor_f\data\fr2035_aa_base_co.paa",
			"\fr2035legacy_armor_f\data\fr2035_mbt_base_co.paa",
			"\fr2035legacy_armor_f\data\fr2035_aa_turret_co.paa"
		};
	};
	class FR2035_MBT_01_arty_F: B_MBT_01_arty_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_MBT_01_arty_F";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035legacy_armor_f\data\fr2035_mbt_base_co.paa",
			"\fr2035legacy_armor_f\data\fr2035_mbt_arty_co.paa",
			"\fr2035_data_f\vehicles\fr2035_turret_co.paa"
		};
	};
	class FR2035_MBT_01_mlrs_F: B_MBT_01_mlrs_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_MBT_01_mlrs_F";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035legacy_armor_f\data\fr2035_mbt_base_co.paa",
			"\fr2035legacy_armor_f\data\fr2035_mbt_mlrs_co.paa"
		};
	};
};
