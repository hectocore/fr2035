#include "BIS_AddonInfo.hpp"
// French Army 2035 Mod
// Made for Arma 3
// Made by Hector Corral
// In order to use the content of this addon in your own mod, please contact me on steam.

class CfgPatches
{
	class FR2035_soft_F
	{
		units[]=
		{
			"FR2035_MRAP_01_F",
			"FR2035_MRAP_01_hmg_F",
			"FR2035_MRAP_01_gmg_F",
			"FR2035_Truck_01_transport_F",
			"FR2035_Truck_01_covered_F",
			"FR2035_Truck_01_mover_F",
			"FR2035_Truck_01_box_F",
			"FR2035_Truck_01_Repair_F",
			"FR2035_Truck_01_ammo_F",
			"FR2035_Truck_01_fuel_F",
			"FR2035_Truck_01_medical_F",
			"FR2035_Quadbike_01_F"
		};
		weapons[]={};
		requiredVersion=1.56;
		requiredAddons[]=
		{
			"FR2035_characters_F",
			"FR2035_data_F"
		};
		version="19-02-2016";
		author="$STR_fr2035_author";
	};
};

class CfgVehicles
{
	class B_MRAP_01_F;
	class B_MRAP_01_gmg_F;
	class B_MRAP_01_hmg_F;
	class B_Truck_01_transport_F;
	class B_Truck_01_covered_F;
	class B_Truck_01_mover_F;
	class B_Truck_01_box_F;
	class B_Truck_01_Repair_F;
	class B_Truck_01_ammo_F;
	class B_Truck_01_fuel_F;
	class B_Truck_01_medical_F;
	class B_Quadbike_01_F;

	class FR2035_MRAP_01_F: B_MRAP_01_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_MRAP_01_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_lite_F"
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
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_mrap_base_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_adds_co.paa",
			""
		};
	};
	class FR2035_MRAP_01_gmg_F: B_MRAP_01_gmg_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_MRAP_01_gmg_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_lite_F"
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
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_mrap_base_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_adds_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_turret_co.paa"
		};
	};
	class FR2035_MRAP_01_hmg_F: B_MRAP_01_hmg_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_MRAP_01_hmg_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_lite_F"
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
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_mrap_base_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_adds_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_turret_co.paa"
		};
	};
	class FR2035_Truck_01_transport_F: B_Truck_01_transport_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_Truck_01_transport_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_base_02_co.paa"
		};
	};
	class FR2035_Truck_01_covered_F: B_Truck_01_covered_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_Truck_01_covered_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_base_02_co.paa"
		};
	};
	class FR2035_Truck_01_mover_F: B_Truck_01_mover_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_Truck_01_mover_F";
		crew="FR2035_Soldier_F";
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
			"\fr2035_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_base_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_adds_co.paa"
		};
	};
	class FR2035_Truck_01_box_F: B_Truck_01_box_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_Truck_01_box_F";
		crew="FR2035_Soldier_F";
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
			"\fr2035_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_base_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_ammo_co.paa"
		};
	};
	class FR2035_Truck_01_Repair_F: B_Truck_01_Repair_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_Truck_01_Repair_F";
		crew="FR2035_Soldier_F";
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
			"\fr2035_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_base_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_ammo_co.paa"
		};
	};
	class FR2035_Truck_01_ammo_F: B_Truck_01_ammo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_Truck_01_ammo_F";
		crew="FR2035_Soldier_F";
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
			"\fr2035_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_base_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_ammo_co.paa"
		};
	};
	class FR2035_Truck_01_fuel_F: B_Truck_01_fuel_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_Truck_01_fuel_F";
		crew="FR2035_Soldier_F";
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
			"\fr2035_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_base_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_fuel_co.paa"
		};
	};
	class FR2035_Truck_01_medical_F: B_Truck_01_medical_F
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_Truck_01_medical_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_base_02_co.paa"
		};
	};
	class FR2035_Quadbike_01_F: B_Quadbike_01_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_Quadbike_01_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_quad_base_co.paa",
			"\fr2035_soft_f\data\fr2035_quad_adds_co.paa"
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