/*
 Please Note:
 This is some legacy code from my older French Army 2035 Mod.
 Please do not use this as a reference, this code is old and of bad quality.
*/

class CfgPatches
{
	class FR2035legacy_boat_F
	{
		units[]=
		{
			"FR2035_Boat_Armed_01_minigun_F",
			"FR2035_Boat_Transport_01_F",
			"FR2035_Lifeboat",
			"FR2035_SDV_01_F"
		};
		weapons[]={};
		requiredVersion=1.56;
		requiredAddons[]=
		{
			"FR2035_characters_F",
			"FR2035_data_F",
			"FR2035_language_F"
		};
		version="18-02-2016";
		author="$STR_fr2035legacy_author";
	};
};

class CfgVehicles
{
	class B_Boat_Armed_01_minigun_F;
	class B_Boat_Transport_01_F;
	class B_Lifeboat;
	class B_SDV_01_F;

	class FR2035_Boat_Armed_01_minigun_F: B_Boat_Armed_01_minigun_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_Boat_Armed_01_minigun_F";
		crew="FR2035_soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F",
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
	};
	class FR2035_Boat_Transport_01_F: B_Boat_Transport_01_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_Boat_Transport_01_F";
		crew="FR2035_soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F",
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
	};
	class FR2035_Lifeboat: B_Lifeboat
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_Lifeboat";
		crew="FR2035_soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F",
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
	};
	class FR2035_SDV_01_F: B_SDV_01_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_SDV_01_F";
		crew="FR2035_diver_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F",
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
	};
};
