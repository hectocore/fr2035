class CfgPatches
{
	class FR2035_Functions_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Script Functions";
		url="https://github.com/hectocore";
		requiredAddons[]=
		{
			"A3_Functions_F"
		};
		requiredVersion=1.66;
		units[]={};
		weapons[]={};
	};
};

class CfgFunctions
{
	class FR2035
	{
		tag="FR2035";
		project="fr2035";
		class World
		{
			file="fr2035_functions_f\world";
			class initWorldScene
			{
				description="World introduction in the main menu";
			};
		};
	};
};
