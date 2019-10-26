class CfgPatches
{
	class FR2035_Map_Scenes_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Map Scenes";
		url="https://github.com/hectocore";
		requiredAddons[]=
		{
			"A3_Map_Altis_Scenes_F",
			"A3_Map_Stratis_Scenes_F",
			"A3_Map_VR_Scenes_F",
			"A3_Map_Malden_Scenes_F",
			"A3_Map_Tanoa_Scenes_F",
			"A3_Map_Enoch_Scenes_F"
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
		class FR2035_Altis_intro
		{
			directory="fr2035_map_scenes_f\scenes\intro.Altis";
		};
		class FR2035_Stratis_intro
		{
			directory="fr2035_map_scenes_f\scenes\intro.Stratis";
		};
		class FR2035_Malden_intro
		{
			directory="fr2035_map_scenes_f\scenes\intro.Malden";
		};
		class FR2035_Tanoa_intro
		{
			directory="fr2035_map_scenes_f\scenes\intro.Tanoa";
		};
	};
};

class CfgWorlds
{
	class CAWorld;
	class Altis: CAWorld
	{
		cutscenes[]=
		{
			"FR2035_Altis_intro"
		};
	};
	class Stratis: CAWorld
	{
		cutscenes[]=
		{
			"FR2035_Stratis_intro"
		};
	};
	class VR: CAWorld
	{
		cutscenes[]=
		{
			"FR2035_Malden_intro"
		};
	};
	class Malden: CAWorld
	{
		cutscenes[]=
		{
			"FR2035_Malden_intro"
		};
	};
	class Tanoa: CAWorld
	{
		cutscenes[]=
		{
			"FR2035_Tanoa_intro"
		};
	};
	class Enoch: CAWorld
	{
		cutscenes[]=
		{
			"FR2035_Altis_intro"
		};
	};
};
