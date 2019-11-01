class CfgPatches
{
	class FR2035_Soft_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Unarmored Land Vehicles";
		url="https://github.com/hectocore";
		requiredAddons[]=
		{
			"FR2035_Characters_F",
			"FR2035_Data_F",
			"A3_Soft_F"
		};
		requiredVersion=1.66;
		units[]={
			"FR2035_MRAP_01_F",
			"FR2035_MRAP_01_gmg_F",
			"FR2035_MRAP_01_hmg_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_MRAP_01_F;
	class FR2035_MRAP_01_F: B_MRAP_01_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_MRAP_01_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_lite_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"riotpolice"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_mrap_01_base_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_01_adds_co.paa",
			""
		};
	};
	class B_MRAP_01_gmg_F;
	class FR2035_MRAP_01_gmg_F: B_MRAP_01_gmg_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_MRAP_01_gmg_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_lite_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_mrap_01_base_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_01_adds_co.paa",
			"\fr2035_data_f\vehicles\fr2035_turret_co.paa"
		};
	};
	class B_MRAP_01_hmg_F;
	class FR2035_MRAP_01_hmg_F: B_MRAP_01_hmg_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_MRAP_01_hmg_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_lite_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_mrap_01_base_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_01_adds_co.paa",
			"\fr2035_data_f\vehicles\fr2035_turret_co.paa"
		};
	};
};
