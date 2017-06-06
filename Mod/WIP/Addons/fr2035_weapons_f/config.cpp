class CfgPatches
{
	class FR2035_Weapons_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Weapons and Accessories";
		url="http://modflavors.com";
		requiredAddons[]=
		{
			"FR2035_Data_F",
			"A3_Weapons_F"
		};
		requiredVersion=1.66;
		units[]={
			"B_FR2035_AssaultPack_ce"
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
		picture="\fr2035_weapons_f\data\ui\fr2035_icon_b_compact_ce_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\fr2035_backpack_compact_ce_co.paa"
		};
	};
};
