class CfgPatches
{
	class FR2035_Data_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Main Configuration";
		url="http://modflavors.com";
		requiredAddons[]=
		{
			"A3_Data_F"
		};
		requiredVersion=1.66;
		units[]={};
		weapons[]={};
	};
};
class CfgMods
{
	class Mod_Base;
	class FR2035: Mod_Base
	{
		picture="\fr2035_data_f\logos\fr2035_icon_ca.paa";
		logo="\fr2035_data_f\logos\fr2035_logo_ca.paa";
		logoOver="\fr2035_data_f\logos\fr2035_logoover_ca.paa";
		logoSmall="\fr2035_data_f\logos\fr2035_logo_small_ca.paa";
		tooltipOwned="$STR_FR2035_Name";
		action="http://modflavors.com";
		dlcColor[]={0.30980392,0.35686275,0.17647059,1};
		overview="$STR_FR2035_Desc";
		hideName=1;
		hidePicture=0;
		name="$STR_FR2035_Name";
		author="$STR_FR2035_Author";
		overviewPicture="\fr2035_data_f\images\fr2035_overviewpicture_co.paa";
		overviewText="$STR_FR2035_Desc";
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class FR2035
		{
			list[]=
			{
				"FR2035_Data_F",
				"FR2035_Language_F"
			};
		};
	};
};
