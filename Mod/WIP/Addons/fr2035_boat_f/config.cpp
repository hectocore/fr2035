class CfgPatches
{
	class FR2035_Boat_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Boats and Submersibles";
		url="https://github.com/hectocore/fr2035";
		requiredAddons[]=
		{
			"FR2035_Characters_F",
			"FR2035_Data_F",
			"A3_Boat_F",
			"A3_Boat_F_Beta"
		};
		requiredVersion=1.66;
		units[]={
      "FR2035_Boat_Armed_01_minigun_F",
			"FR2035_Boat_Transport_01_F",
			"FR2035_Lifeboat",
			"FR2035_SDV_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_Boat_Armed_01_minigun_F;
	class FR2035_Boat_Armed_01_minigun_F: B_Boat_Armed_01_minigun_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Boat_Armed_01_minigun_F.jpg";
		_generalMacro="FR2035_Boat_Armed_01_minigun_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F",
			"FR2035_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
    hiddenSelectionsTextures[]=
		{
			"\fr2035_boat_f\data\fr2035_boat_armed_01_ext_co.paa",
			"\fr2035_boat_f\data\fr2035_boat_armed_01_int_co.paa",
			"\fr2035_data_f\vehicles\navy\fr2035_turret_co.paa"
		};
		class TextureSources
		{
			class Navy
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_boat_f\data\fr2035_boat_armed_01_ext_co.paa",
					"\fr2035_boat_f\data\fr2035_boat_armed_01_int_co.paa",
					"\fr2035_data_f\vehicles\navy\fr2035_turret_co.paa"
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
				count=10;
			};
			class _xx_medikit
			{
				name="medikit";
				count=1;
			};
		};
	};
	class B_Boat_Transport_01_F;
	class FR2035_Boat_Transport_01_F: B_Boat_Transport_01_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Boat_Transport_01_F.jpg";
		_generalMacro="FR2035_Boat_Transport_01_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F",
			"FR2035_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"camo1"
		};
    hiddenSelectionsTextures[]=
		{
			"\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
		};
		textureList[]=
		{
			"Navy",
			1
		};
		class TextureSources
		{
			class Navy
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
			class Rescue
			{
				displayName="$STR_A3_TEXTURESOURCES_RESCUE0";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_boat_f\data\fr2035_boat_transport_01_rescue_co.paa"
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
				count=2;
			};
		};
	};
	class B_Lifeboat;
	class FR2035_Lifeboat: B_Lifeboat
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Lifeboat.jpg";
		_generalMacro="FR2035_Lifeboat";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F",
			"FR2035_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"camo1"
		};
    hiddenSelectionsTextures[]=
		{
			"\fr2035_boat_f\data\fr2035_boat_transport_01_rescue_co.paa"
		};
		textureList[]=
		{
			"Rescue",
			1
		};
		class TextureSources
		{
			class Navy
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
			class Rescue
			{
				displayName="$STR_A3_TEXTURESOURCES_RESCUE0";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_boat_f\data\fr2035_boat_transport_01_rescue_co.paa"
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
				count=2;
			};
		};
	};
	class B_SDV_01_F;
	class FR2035_SDV_01_F: B_SDV_01_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_SDV_01_F.jpg";
		_generalMacro="FR2035_SDV_01_F";
		crew="FR2035_diver_F";
		typicalCargo[]=
		{
			"FR2035_diver_F",
			"FR2035_diver_F"
		};
		side=1;
		faction="FR2035_F";
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
				count=2;
			};
		};
	};
};
