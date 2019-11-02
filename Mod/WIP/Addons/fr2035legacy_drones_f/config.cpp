/*
 Please Note:
 This is some legacy code from my older French Army 2035 Mod.
 Please do not use this as a reference, this code is old and of bad quality.
*/

class CfgPatches
{
	class FR2035legacy_drones_F
	{
		units[]=
		{
			"FR2035_UAV_AI",
			"FR2035_UGV_01_F",
			"FR2035_UGV_01_rcws_F",
			"FR2035_UAV_02_F",
			"FR2035_UAV_02_CAS_F",
			"FR2035_UAV_02_dynamicLoadout_F",
			"FR2035_UAV_01_F"
		};
		weapons[]={};
		requiredVersion=1.56;
		requiredAddons[]=
		{
			"FR2035_data_F"
		};
		version="19-02-2016";
		author="$STR_fr2035legacy_author";
	};
};

class CfgVehicles
{
	class B_UAV_AI;
	class B_UGV_01_F;
	class B_UGV_01_rcws_F;
	class B_UAV_02_F;
	class B_UAV_02_CAS_F;
	class B_UAV_02_dynamicLoadout_F;
	class B_UAV_01_F;

	class FR2035_UAV_AI: B_UAV_AI
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_UAV_AI";
		faction="FR2035_F";
	};
	class FR2035_UGV_01_F: B_UGV_01_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_UGV_01_F";
		crew="FR2035_UAV_AI";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		hiddenSelectionsTextures[]=
		{
			"\fr2035legacy_drones_f\data\fr2035_ugv_base_co.paa",
			"\fr2035legacy_drones_f\data\fr2035_ugv_adds_co.paa",
			"\fr2035_data_f\vehicles\fr2035_turret_co.paa"
		};
	};
	class FR2035_UGV_01_rcws_F: B_UGV_01_rcws_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_UGV_01_rcws_F";
		crew="FR2035_UAV_AI";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		hiddenSelectionsTextures[]=
		{
			"\fr2035legacy_drones_f\data\fr2035_ugv_base_co.paa",
			"\fr2035legacy_drones_f\data\fr2035_ugv_adds_co.paa",
			"\fr2035_data_f\vehicles\fr2035_turret_co.paa"
		};
	};
	class FR2035_UAV_02_F: B_UAV_02_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_UAV_02_F";
		crew="FR2035_UAV_AI";
		typicalCargo[]=
		{
			"FR2035_UAV_AI"
		};
		faction="FR2035_F";
		hiddenSelectionsTextures[]=
		{
			"\fr2035legacy_drones_f\data\fr2035_uav_base_co.paa"
		};
	};
	class FR2035_UAV_02_CAS_F: B_UAV_02_CAS_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_UAV_02_CAS_F";
		crew="FR2035_UAV_AI";
		typicalCargo[]=
		{
			"FR2035_UAV_AI"
		};
		faction="FR2035_F";
		hiddenSelectionsTextures[]=
		{
			"\fr2035legacy_drones_f\data\fr2035_uav_base_co.paa"
		};
	};
	class FR2035_UAV_02_dynamicLoadout_F: B_UAV_02_dynamicLoadout_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_UAV_02_dynamicLoadout_F";
		crew="FR2035_UAV_AI";
		typicalCargo[]=
		{
			"FR2035_UAV_AI"
		};
		faction="FR2035_F";
		hiddenSelectionsTextures[]=
		{
			"\fr2035legacy_drones_f\data\fr2035_uav_base_co.paa"
		};
	};
	class FR2035_UAV_01_F: B_UAV_01_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_UAV_01_F";
		crew="FR2035_UAV_AI";
		typicalCargo[]=
		{
			"FR2035_UAV_AI"
		};
		faction="FR2035_F";
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
