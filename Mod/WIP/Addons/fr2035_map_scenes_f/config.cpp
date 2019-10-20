class CfgPatches
{
	class FR2035_Map_Scenes_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Map Scenes";
		url="https://github.com/hectocore";
		requiredAddons[]=
		{
			"A3_Map_Altis_Scenes_F"
		};
		requiredVersion=1.66;
		units[]={};
		weapons[]={};
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class Altis_intro1
		{
			directory="\fr2035_map_scenes_f\scenes\intro.Altis";
		};
	};
};
