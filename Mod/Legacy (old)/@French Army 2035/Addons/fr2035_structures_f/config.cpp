#include "BIS_AddonInfo.hpp"
// French Army 2035 Mod
// Made for Arma 3
// Made by Hector Corral
// In order to use the content of this addon in your own mod, please contact me on steam.

class CfgPatches
{
	class FR2035_structures_F
	{
		units[]=
		{
			"FR2035_Flag_FR_F"
		};
		weapons[]={};
		requiredVersion=1.56;
		requiredAddons[]=
		{
			"FR2035_data_F","FR2035_language_F"
		};
		version="16-02-2016";
		author="$STR_fr2035_author";
	};
};

class CfgVehicles
{
	class FlagCarrier;
	
	class FR2035_Flag_FR_F: FlagCarrier
	{
		author="$STR_fr2035_author";
		_generalMacro="FR2035_Flag_FR_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_fr2035_flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture 'fr2035_data_F\data\fr2035_flag_co.paa'";
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