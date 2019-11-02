/*
 Please Note:
 This is some legacy code from my older French Army 2035 Mod.
 Please do not use this as a reference, this code is old and of bad quality.
*/

class CfgPatches
{
	class FR2035legacy_soft_f
	{
		units[]=
		{
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
		author="$STR_fr2035legacy_author";
	};
};

class CfgVehicles
{
	class B_Truck_01_mover_F;
	class B_Truck_01_box_F;
	class B_Truck_01_Repair_F;
	class B_Truck_01_ammo_F;
	class B_Truck_01_fuel_F;
	class B_Truck_01_medical_F;
	class B_Quadbike_01_F;

	class FR2035_Truck_01_mover_F: B_Truck_01_mover_F
	{
		author="$STR_fr2035legacy_author";
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
			"\fr2035legacy_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035legacy_soft_f\data\fr2035_truck_base_02_co.paa",
			"\fr2035legacy_soft_f\data\fr2035_truck_adds_co.paa"
		};
	};
	class FR2035_Truck_01_box_F: B_Truck_01_box_F
	{
		author="$STR_fr2035legacy_author";
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
			"\fr2035legacy_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035legacy_soft_f\data\fr2035_truck_base_02_co.paa",
			"\fr2035legacy_soft_f\data\fr2035_truck_ammo_co.paa"
		};
	};
	class FR2035_Truck_01_Repair_F: B_Truck_01_Repair_F
	{
		author="$STR_fr2035legacy_author";
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
			"\fr2035legacy_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035legacy_soft_f\data\fr2035_truck_base_02_co.paa",
			"\fr2035legacy_soft_f\data\fr2035_truck_ammo_co.paa"
		};
	};
	class FR2035_Truck_01_ammo_F: B_Truck_01_ammo_F
	{
		author="$STR_fr2035legacy_author";
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
			"\fr2035legacy_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035legacy_soft_f\data\fr2035_truck_base_02_co.paa",
			"\fr2035legacy_soft_f\data\fr2035_truck_ammo_co.paa"
		};
	};
	class FR2035_Truck_01_fuel_F: B_Truck_01_fuel_F
	{
		author="$STR_fr2035legacy_author";
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
			"\fr2035legacy_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035legacy_soft_f\data\fr2035_truck_base_02_co.paa",
			"\fr2035legacy_soft_f\data\fr2035_truck_fuel_co.paa"
		};
	};
	class FR2035_Truck_01_medical_F: B_Truck_01_medical_F
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_Truck_01_medical_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		faction="FR2035_F";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] =
		{
			"\fr2035legacy_soft_f\data\fr2035_truck_base_01_co.paa",
			"\fr2035legacy_soft_f\data\fr2035_truck_base_02_co.paa",
			"\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa",
			"\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"
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
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] =
		{
			"\fr2035legacy_soft_f\data\fr2035_quad_base_co.paa",
			"\fr2035legacy_soft_f\data\fr2035_quad_adds_co.paa"
		};
	};
};
