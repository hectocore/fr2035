class CfgPatches
{
	class FR2035_Drones_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Drones";
		url="https://github.com/hectocore/fr2035";
		requiredAddons[]=
		{
			"FR2035_Characters_F",
			"FR2035_Data_F",
			"A3_Drones_F"
		};
		requiredVersion=1.66;
		units[]={
      "FR2035_UGV_01_F",
			"FR2035_UGV_01_rcws_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_UGV_01_F;
	class FR2035_UGV_01_F: B_UGV_01_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_UGV_01_F.jpg"; // Generate and add preview
		_generalMacro="FR2035_UGV_01_F";
		crew="FR2035_UAV_AI";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
    hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
    hiddenSelectionsTextures[]=
		{
			"\fr2035_drones_f\data\fr2035_ugv_01_ext_co.paa",
			"\fr2035_drones_f\data\fr2035_ugv_01_int_co.paa",
			"\fr2035_data_f\vehicles\fr2035_turret_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
          "\fr2035_drones_f\data\fr2035_ugv_01_ext_co.paa",
    			"\fr2035_drones_f\data\fr2035_ugv_01_int_co.paa",
    			"\fr2035_data_f\vehicles\fr2035_turret_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
			class BTDF
			{
				displayName="$STR_FR2035_Camo_BTDF";
				author="$STR_FR2035_Author";
				textures[]=
				{
          "\fr2035_drones_f\data\btdf\fr2035_ugv_01_ext_co.paa",
    			"\fr2035_drones_f\data\btdf\fr2035_ugv_01_int_co.paa",
    			"\fr2035_data_f\vehicles\btdf\fr2035_turret_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
			class Daguet
			{
				displayName="$STR_FR2035_Camo_Daguet";
				author="$STR_FR2035_Author";
				textures[]=
				{
          "\fr2035_drones_f\data\daguet\fr2035_ugv_01_ext_co.paa",
    			"\fr2035_drones_f\data\daguet\fr2035_ugv_01_int_co.paa",
    			"\fr2035_data_f\vehicles\daguet\fr2035_turret_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
    class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	class B_UGV_01_rcws_F;
	class FR2035_UGV_01_rcws_F: B_UGV_01_rcws_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_UGV_01_rcws_F.jpg"; // Generate and add preview
		_generalMacro="FR2035_UGV_01_rcws_F";
		crew="FR2035_UAV_AI";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
    hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
    hiddenSelectionsTextures[]=
		{
			"\fr2035_drones_f\data\fr2035_ugv_01_ext_co.paa",
			"\fr2035_drones_f\data\fr2035_ugv_01_int_co.paa",
			"\fr2035_data_f\vehicles\fr2035_turret_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
          "\fr2035_drones_f\data\fr2035_ugv_01_ext_co.paa",
    			"\fr2035_drones_f\data\fr2035_ugv_01_int_co.paa",
    			"\fr2035_data_f\vehicles\fr2035_turret_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
			class BTDF
			{
				displayName="$STR_FR2035_Camo_BTDF";
				author="$STR_FR2035_Author";
				textures[]=
				{
          "\fr2035_drones_f\data\btdf\fr2035_ugv_01_ext_co.paa",
    			"\fr2035_drones_f\data\btdf\fr2035_ugv_01_int_co.paa",
    			"\fr2035_data_f\vehicles\btdf\fr2035_turret_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
			class Daguet
			{
				displayName="$STR_FR2035_Camo_Daguet";
				author="$STR_FR2035_Author";
				textures[]=
				{
          "\fr2035_drones_f\data\daguet\fr2035_ugv_01_ext_co.paa",
    			"\fr2035_drones_f\data\daguet\fr2035_ugv_01_int_co.paa",
    			"\fr2035_data_f\vehicles\daguet\fr2035_turret_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
    class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
};
