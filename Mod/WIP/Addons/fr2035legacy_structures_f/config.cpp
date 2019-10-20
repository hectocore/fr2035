/*
 Please Note:
 This is some legacy code from my older French Army 2035 Mod.
 Please do not use this as a reference, this code is old and of bad quality.
*/

class CfgPatches
{
	class FR2035legacy_structures_F
	{
		units[]=
		{
			"FR2035_Flag_FR_F"
		};
		weapons[]={};
		requiredVersion=1.56;
		requiredAddons[]=
		{
			"FR2035_data_F"
		};
		version="16-02-2016";
		author="$STR_fr2035legacy_author";
	};
};

class CfgVehicles
{
	class FlagCarrier;

	class FR2035_Flag_FR_F: FlagCarrier
	{
		author="$STR_fr2035legacy_author";
		_generalMacro="FR2035_Flag_FR_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_fr2035legacy_flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\fr2035_data_f\flags\flag_fr_co.paa'";
		};
	};
};
