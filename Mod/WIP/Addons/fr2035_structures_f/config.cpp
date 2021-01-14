class CfgPatches
{
	class FR2035_Structures_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Buildings and Structures";
		url="https://github.com/hectocore/fr2035";
		requiredAddons[]=
		{
			"FR2035_Data_F",
			"A3_Structures_F",
			"A3_Structures_F_Mil",
			"A3_Structures_F_Orange"
		};
		requiredVersion=1.66;
		units[]={
			"FR2035_Flag_APrank_F", // To remove
      "FR2035_Flag_FR_F",
			"FR2035_Flag_EU_F",
			"FR2035_Flag_FR_Air_F",
			"FR2035_Flag_FR_Army_F",
			"FR2035_Flag_FR_Navy_F",
			"FR2035_Banner_01_FR_F",
			"FR2035_Banner_01_FR_Air_F",
			"FR2035_Banner_01_FR_Army_F",
			"FR2035_Banner_01_FR_Navy_F"
		};
		weapons[]={};
	};
};

class CfgVehicles
{
	class Flag_US_F;
	class FR2035_Flag_FR_F: Flag_US_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Flag_FR_F.jpg";
		_generalMacro="FR2035_Flag_FR_F";
		displayName="Flag (FR)"; // TODO : Add to stringtable
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\fr2035_data_f\flags\fr2035_flag_fr_co.paa'";
		};
	};
	class FR2035_Flag_EU_F: Flag_US_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Flag_EU_F.jpg";
		_generalMacro="FR2035_Flag_EU_F";
		displayName="Flag (EU)"; // TODO : Add to stringtable
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\fr2035_data_f\flags\fr2035_flag_eu_co.paa'";
		};
	};
	class Flag_NATO_F;
	class FR2035_Flag_FR_Air_F: Flag_NATO_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Flag_FR_Air_F.jpg";
		_generalMacro="FR2035_Flag_FR_Air_F";
		displayName="Flag (FR - Air)"; // TODO : Add to stringtable
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\fr2035_data_f\flags\fr2035_flag_fr_air_co.paa'";
		};
	};
	class FR2035_Flag_FR_Army_F: Flag_NATO_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Flag_FR_Army_F.jpg";
		_generalMacro="FR2035_Flag_FR_Army_F";
		displayName="Flag (FR - Terre)"; // TODO : Add to stringtable
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\fr2035_data_f\flags\fr2035_flag_fr_army_co.paa'";
		};
	};
	class FR2035_Flag_FR_Navy_F: Flag_NATO_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Flag_FR_Navy_F.jpg";
		_generalMacro="FR2035_Flag_FR_Navy_F";
		displayName="Flag (FR - Marine)"; // TODO : Add to stringtable
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\fr2035_data_f\flags\fr2035_flag_fr_navy_co.paa'";
		};
	};
	class Banner_01_F;
	class FR2035_Banner_01_FR_F: Banner_01_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Banner_01_FR_F.jpg";
		_generalMacro="FR2035_Banner_01_FR_F";
		displayName="Banner (FR)"; // TODO : Add to stringtable
		hiddenSelectionsTextures[]=
		{
			"\fr2035_data_f\flags\fr2035_flag_fr_co.paa"
		};
	};
	class FR2035_Banner_01_EU_F: Banner_01_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Banner_01_EU_F.jpg";
		_generalMacro="FR2035_Banner_01_EU_F";
		displayName="Banner (EU)"; // TODO : Add to stringtable
		hiddenSelectionsTextures[]=
		{
			"\fr2035_data_f\flags\fr2035_flag_eu_co.paa"
		};
	};
	class FR2035_Banner_01_FR_Air_F: Banner_01_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Banner_01_FR_Air_F.jpg";
		_generalMacro="FR2035_Banner_01_FR_Air_F";
		displayName="Banner (FR - Air)"; // TODO : Add to stringtable
		hiddenSelectionsTextures[]=
		{
			"\fr2035_data_f\flags\fr2035_flag_fr_air_co.paa"
		};
	};
	class FR2035_Banner_01_FR_Army_F: Banner_01_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Banner_01_FR_Army_F.jpg";
		_generalMacro="FR2035_Banner_01_FR_Army_F";
		displayName="Banner (FR - Army)"; // TODO : Add to stringtable
		hiddenSelectionsTextures[]=
		{
			"\fr2035_data_f\flags\fr2035_flag_fr_army_co.paa"
		};
	};
	class FR2035_Banner_01_FR_Navy_F: Banner_01_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Banner_01_FR_Navy_F.jpg";
		_generalMacro="FR2035_Banner_01_FR_Navy_F";
		displayName="Banner (FR - Navy)"; // TODO : Add to stringtable
		hiddenSelectionsTextures[]=
		{
			"\fr2035_data_f\flags\fr2035_flag_fr_navy_co.paa"
		};
	};
};
