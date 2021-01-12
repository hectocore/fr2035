class CfgPatches
{
	class FR2035_Armor_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Armored Land Vehicles";
		url="https://github.com/hectocore/fr2035";
		requiredAddons[]=
		{
			"FR2035_Characters_F",
			"FR2035_Data_F",
			"A3_Armor_F",
			"A3_Armor_F_Beta",
			"A3_Armor_F_Gamma",
			"A3_Armor_F_EPB",
			"A3_Armor_F_Tank"
		};
		requiredVersion=1.66;
		units[]={
			"FR2035_MBT_03_cannon_F",
			"FR2035_APC_Wheeled_01_cannon_F",
			"FR2035_AFV_Wheeled_01_cannon_F",
			"FR2035_AFV_Wheeled_01_up_cannon_F",
			"FR2035_APC_Tracked_01_rcws_F",
			"FR2035_APC_Tracked_01_CRV_F",
			"FR2035_APC_Tracked_01_AA_F",
			"FR2035_MBT_01_arty_F",
			"FR2035_MBT_01_mlrs_F"
		};
		weapons[]={};
	};
};

// Import of config templates
class SensorTemplateLaser;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgVehicles
{
	class I_MBT_03_cannon_F;
	class I_MBT_03_cannon_F_copy: I_MBT_03_cannon_F {
		scope=0;
		// You must copy the base class in order to retrieve its child class
		class Turrets;
	};
	class I_MBT_03_cannon_F_copy_l2: I_MBT_03_cannon_F_copy {
		// Going one level lower
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	class I_MBT_03_cannon_F_copy_l3: I_MBT_03_cannon_F_copy_l2 {
		// Going one level lower, another time
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets;
			};
		};
	};
	class I_MBT_03_cannon_F_copy_l4: I_MBT_03_cannon_F_copy_l3 {
		// Going one level lower, one last time
		class Components;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets: Turrets {
					class CommanderOptics;
				};
			};
		};
	};
	class FR2035_MBT_03_cannon_F: I_MBT_03_cannon_F_copy_l4
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_MBT_03_cannon_F.jpg";
		_generalMacro="FR2035_MBT_03_cannon_F";
		scope=2;
		displayName="$STR_FR2035_MBT_03_cannon";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
		// START of Sensors config
		radarType=2;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		receiveRemoteTargets=1;
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",
			0.31622776,
			1
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent: SensorTemplateDataLink {};
					// Adds DataLink capability to vehicle
				};
			};
		};
		class Turrets: Turrets
		{
		  class MainTurret: MainTurret
		  {
		    class Turrets: Turrets
		    {
		      class CommanderOptics: CommanderOptics
		      {
		        class Components
		        {
		          class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
		          {
		            class Components: components
		            {
		              class SensorDisplay
		              {
		                componentType="SensorsDisplayComponent";
		                range[]={4000,2000,1000,8000};
		                resource="RscCustomInfoSensors";
		              };
		            };
		          };
		          class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
		          {
		            defaultDisplay="SensorDisplay";
		            class Components: components
		            {
		              class SensorDisplay
		              {
		                componentType="SensorsDisplayComponent";
		                range[]={4000,2000,1000,8000};
		                resource="RscCustomInfoSensors";
		              };
		            };
		          };
		        };
		      };
		    };
		    class Components
		    {
		      class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
		      {
		        class Components: components
		        {
		          class SensorDisplay
		          {
		            componentType="SensorsDisplayComponent";
		            range[]={4000,2000,1000,8000};
		            resource="RscCustomInfoSensors";
		          };
		        };
		      };
		      class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
		      {
		        defaultDisplay="SensorDisplay";
		        class Components: components
		        {
		          class SensorDisplay
		          {
		            componentType="SensorsDisplayComponent";
		            range[]={4000,2000,1000,8000};
		            resource="RscCustomInfoSensors";
		          };
		        };
		      };
		    };
		  };
		};
		// END of Sensors config
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_mbt_03_ext01_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_03_ext02_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_03_rcws_co.paa",
			"A3\Armor_F\Data\camonet_greenbeige_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_armor_f\data\fr2035_mbt_03_ext01_co.paa",
					"\fr2035_armor_f\data\fr2035_mbt_03_ext02_co.paa",
					"\fr2035_armor_f\data\fr2035_mbt_03_rcws_co.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa"
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
					"\fr2035_armor_f\data\btdf\fr2035_mbt_03_ext01_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_mbt_03_ext02_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_mbt_03_rcws_co.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa"
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
					"\fr2035_armor_f\data\daguet\fr2035_mbt_03_ext01_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_mbt_03_ext02_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_mbt_03_rcws_co.paa",
					"A3\Armor_F\Data\camonet_nato_desert_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_FR2035_arifle_416F_blk_F
			{
				weapon="FR2035_arifle_416F_blk_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class B_APC_Wheeled_01_cannon_F;
	class FR2035_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_cannon_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_APC_Wheeled_01_cannon_F.jpg";
		_generalMacro="FR2035_APC_Wheeled_01_cannon_F";
		displayName="$STR_FR2035_APC_Wheeled_01_cannon";
		crew="FR2035_crew_F";
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
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_apc_wheeled_01_base_co.paa",
			"\fr2035_armor_f\data\fr2035_apc_wheeled_01_adds_co.paa",
			"\fr2035_armor_f\data\fr2035_apc_wheeled_01_tows_co.paa",
			"a3\Armor_F\Data\camonet_greenbeige_co.paa",
			"\fr2035_armor_f\data\fr2035_cage_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_armor_f\data\fr2035_apc_wheeled_01_base_co.paa",
					"\fr2035_armor_f\data\fr2035_apc_wheeled_01_adds_co.paa",
					"\fr2035_armor_f\data\fr2035_apc_wheeled_01_tows_co.paa",
					"a3\Armor_F\Data\camonet_greenbeige_co.paa",
					"\fr2035_armor_f\data\fr2035_cage_co.paa"
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
					"\fr2035_armor_f\data\btdf\fr2035_apc_wheeled_01_base_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_apc_wheeled_01_adds_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_apc_wheeled_01_tows_co.paa",
					"a3\Armor_F\Data\camonet_greenbeige_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_cage_co.paa"
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
					"\fr2035_armor_f\data\daguet\fr2035_apc_wheeled_01_base_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_apc_wheeled_01_adds_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_apc_wheeled_01_tows_co.paa",
					"a3\Armor_F\Data\camonet_nato_desert_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_cage_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=12;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_FR2035_arifle_416F_blk_F
			{
				weapon="FR2035_arifle_416F_blk_F";
				count=2;
			};
		};
	};
	class B_AFV_Wheeled_01_cannon_F;
	class FR2035_AFV_Wheeled_01_cannon_F: B_AFV_Wheeled_01_cannon_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_AFV_Wheeled_01_cannon_F.jpg";
		_generalMacro="FR2035_AFV_Wheeled_01_cannon_F";
		displayName="$STR_FR2035_AFV_Wheeled_01_cannon";
		crew="FR2035_crew_F";
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
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext1_CO.paa",
			"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext2_CO.paa",
			"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_co.paa",
			"a3\Armor_F\Data\camonet_greenbeige_co.paa",
			"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext3_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext1_CO.paa",
					"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext2_CO.paa",
					"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_co.paa",
					"a3\Armor_F\Data\camonet_greenbeige_co.paa",
					"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext3_co.paa"
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
					"\fr2035_armor_f\data\btdf\fr2035_afv_wheeled_01_ext1_CO.paa",
					"\fr2035_armor_f\data\btdf\fr2035_afv_wheeled_01_ext2_CO.paa",
					"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_co.paa",
					"a3\Armor_F\Data\camonet_greenbeige_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_afv_wheeled_01_ext3_co.paa"
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
					"\fr2035_armor_f\data\daguet\fr2035_afv_wheeled_01_ext1_CO.paa",
					"\fr2035_armor_f\data\daguet\fr2035_afv_wheeled_01_ext2_CO.paa",
					"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_co.paa",
					"a3\Armor_F\Data\camonet_nato_desert_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_afv_wheeled_01_ext3_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_FR2035_arifle_416F_blk_F
			{
				weapon="FR2035_arifle_416F_blk_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class B_AFV_Wheeled_01_up_cannon_F;
	class FR2035_AFV_Wheeled_01_up_cannon_F: B_AFV_Wheeled_01_up_cannon_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_AFV_Wheeled_01_up_cannon_F.jpg";
		_generalMacro="FR2035_AFV_Wheeled_01_up_cannon_F";
		displayName="$STR_FR2035_AFV_Wheeled_01_up_cannon";
		crew="FR2035_crew_F";
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
			"camo3",
			"camo4",
			"camo5",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext1_CO.paa",
			"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext2_CO.paa",
			"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_co.paa",
			"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext3_co.paa",
			"\fr2035_armor_f\data\fr2035_afv_commander_tow_co.paa",
			"a3\Armor_F\Data\camonet_greenbeige_co.paa",
			"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext3_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext1_CO.paa",
					"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext2_CO.paa",
					"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_co.paa",
					"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext3_co.paa",
					"\fr2035_armor_f\data\fr2035_afv_commander_tow_co.paa",
					"a3\Armor_F\Data\camonet_greenbeige_co.paa",
					"\fr2035_armor_f\data\fr2035_afv_wheeled_01_ext3_co.paa"
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
					"\fr2035_armor_f\data\btdf\fr2035_afv_wheeled_01_ext1_CO.paa",
					"\fr2035_armor_f\data\btdf\fr2035_afv_wheeled_01_ext2_CO.paa",
					"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_afv_wheeled_01_ext3_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_afv_commander_tow_co.paa",
					"a3\Armor_F\Data\camonet_greenbeige_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_afv_wheeled_01_ext3_co.paa"
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
					"\fr2035_armor_f\data\daguet\fr2035_afv_wheeled_01_ext1_CO.paa",
					"\fr2035_armor_f\data\daguet\fr2035_afv_wheeled_01_ext2_CO.paa",
					"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_afv_wheeled_01_ext3_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_afv_commander_tow_co.paa",
					"a3\Armor_F\Data\camonet_nato_desert_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_afv_wheeled_01_ext3_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_FR2035_arifle_416F_blk_F
			{
				weapon="FR2035_arifle_416F_blk_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class B_APC_Tracked_01_rcws_F;
	class FR2035_APC_Tracked_01_rcws_F: B_APC_Tracked_01_rcws_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_APC_Tracked_01_rcws_F.jpg";
		_generalMacro="FR2035_APC_Tracked_01_rcws_F";
		displayName="$STR_FR2035_APC_Tracked_01_rcws";
		crew="FR2035_crew_F";
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
			"camo3",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_apc_tracked_01_body_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_01_body_co.paa",
			"\fr2035_data_f\vehicles\fr2035_turret_co.paa",
			"a3\Armor_F\Data\camonet_greenbeige_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_armor_f\data\fr2035_apc_tracked_01_body_co.paa",
					"\fr2035_armor_f\data\fr2035_mbt_01_body_co.paa",
					"\fr2035_data_f\vehicles\fr2035_turret_co.paa",
					"a3\Armor_F\Data\camonet_greenbeige_co.paa"
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
					"\fr2035_armor_f\data\btdf\fr2035_apc_tracked_01_body_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_mbt_01_body_co.paa",
					"\fr2035_data_f\vehicles\btdf\fr2035_turret_co.paa",
					"a3\Armor_F\Data\camonet_greenbeige_co.paa"
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
					"\fr2035_armor_f\data\daguet\fr2035_apc_tracked_01_body_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_mbt_01_body_co.paa",
					"\fr2035_data_f\vehicles\daguet\fr2035_turret_co.paa",
					"a3\Armor_F\Data\camonet_nato_desert_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=24;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_FR2035_arifle_416F_blk_F
			{
				weapon="FR2035_arifle_416F_blk_F";
				count=2;
			};
			class _xx_FR2035_LMG_Minimi_blk_F
			{
				weapon="FR2035_LMG_Minimi_blk_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
		};
	};
	class B_APC_Tracked_01_CRV_F;
	class FR2035_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_APC_Tracked_01_CRV_F.jpg";
		_generalMacro="FR2035_APC_Tracked_01_CRV_F";
		displayName="$STR_FR2035_APC_Tracked_01_CRV";
		crew="FR2035_crew_F";
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
			"camo3",
			"camo4",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_apc_tracked_01_body_crv_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_01_body_co.paa",
			"\fr2035_data_f\vehicles\fr2035_turret_co.paa",
			"\fr2035_armor_f\data\fr2035_apc_tracked_01_crv_co.paa",
			"a3\Armor_F\Data\camonet_greenbeige_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_armor_f\data\fr2035_apc_tracked_01_body_crv_co.paa",
					"\fr2035_armor_f\data\fr2035_mbt_01_body_co.paa",
					"\fr2035_data_f\vehicles\fr2035_turret_co.paa",
					"\fr2035_armor_f\data\fr2035_apc_tracked_01_crv_co.paa",
					"a3\Armor_F\Data\camonet_greenbeige_co.paa"
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
					"\fr2035_armor_f\data\btdf\fr2035_apc_tracked_01_body_crv_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_mbt_01_body_co.paa",
					"\fr2035_data_f\vehicles\btdf\fr2035_turret_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_apc_tracked_01_crv_co.paa",
					"a3\Armor_F\Data\camonet_greenbeige_co.paa"
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
					"\fr2035_armor_f\data\daguet\fr2035_apc_tracked_01_body_crv_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_mbt_01_body_co.paa",
					"\fr2035_data_f\vehicles\daguet\fr2035_turret_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_apc_tracked_01_crv_co.paa",
					"a3\Armor_F\Data\camonet_nato_desert_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=24;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_FR2035_arifle_416F_blk_F
			{
				weapon="FR2035_arifle_416F_blk_F";
				count=2;
			};
			class _xx_FR2035_LMG_Minimi_blk_F
			{
				weapon="FR2035_LMG_Minimi_blk_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
		};
	};
	class B_APC_Tracked_01_AA_F;
	class FR2035_APC_Tracked_01_AA_F: B_APC_Tracked_01_AA_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_APC_Tracked_01_AA_F.jpg";
		_generalMacro="FR2035_APC_Tracked_01_AA_F";
		displayName="$STR_FR2035_APC_Tracked_01_AA";
		crew="FR2035_crew_F";
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
			"camo3",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_apc_tracked_01_aa_body_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_01_body_co.paa",
			"\fr2035_armor_f\data\fr2035_apc_tracked_01_aa_tower_co.paa",
			"a3\Armor_F\Data\camonet_greenbeige_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_armor_f\data\fr2035_apc_tracked_01_aa_body_co.paa",
					"\fr2035_armor_f\data\fr2035_mbt_01_body_co.paa",
					"\fr2035_armor_f\data\fr2035_apc_tracked_01_aa_tower_co.paa",
					"a3\Armor_F\Data\camonet_greenbeige_co.paa"
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
					"\fr2035_armor_f\data\btdf\fr2035_apc_tracked_01_aa_body_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_mbt_01_body_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_apc_tracked_01_aa_tower_co.paa",
					"a3\Armor_F\Data\camonet_greenbeige_co.paa"
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
					"\fr2035_armor_f\data\daguet\fr2035_apc_tracked_01_aa_body_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_mbt_01_body_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_apc_tracked_01_aa_tower_co.paa",
					"a3\Armor_F\Data\camonet_nato_desert_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=24;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_FR2035_arifle_416F_blk_F
			{
				weapon="FR2035_arifle_416F_blk_F";
				count=2;
			};
			class _xx_FR2035_LMG_Minimi_blk_F
			{
				weapon="FR2035_LMG_Minimi_blk_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
		};
	};
	class B_MBT_01_arty_F;
	class FR2035_MBT_01_arty_F: B_MBT_01_arty_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_MBT_01_arty_F.jpg";
		_generalMacro="FR2035_MBT_01_arty_F";
		displayName="$STR_FR2035_MBT_01_arty";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_mbt_01_body_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_01_scorcher_co.paa",
			"\fr2035_data_f\vehicles\fr2035_turret_co.paa",
			"A3\Armor_F\Data\camonet_greenbeige_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_armor_f\data\fr2035_mbt_01_body_co.paa",
					"\fr2035_armor_f\data\fr2035_mbt_01_scorcher_co.paa",
					"\fr2035_data_f\vehicles\fr2035_turret_co.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa"
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
					"\fr2035_armor_f\data\btdf\fr2035_mbt_01_body_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_mbt_01_scorcher_co.paa",
					"\fr2035_data_f\vehicles\btdf\fr2035_turret_co.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa"
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
					"\fr2035_armor_f\data\daguet\fr2035_mbt_01_body_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_mbt_01_scorcher_co.paa",
					"\fr2035_data_f\vehicles\daguet\fr2035_turret_co.paa",
					"a3\Armor_F\Data\camonet_nato_desert_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_FR2035_arifle_416F_blk_F
			{
				weapon="FR2035_arifle_416F_blk_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class B_MBT_01_mlrs_F;
	class FR2035_MBT_01_mlrs_F: B_MBT_01_mlrs_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_MBT_01_mlrs_F.jpg";
		_generalMacro="FR2035_MBT_01_mlrs_F";
		displayName="$STR_FR2035_MBT_01_mlrs";
		crew="FR2035_crew_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_armor_f\data\fr2035_mbt_01_body_co.paa",
			"\fr2035_armor_f\data\fr2035_mbt_01_mlrs_co.paa",
			"A3\Armor_F\Data\camonet_greenbeige_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_armor_f\data\fr2035_mbt_01_body_co.paa",
					"\fr2035_armor_f\data\fr2035_mbt_01_mlrs_co.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa"
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
					"\fr2035_armor_f\data\btdf\fr2035_mbt_01_body_co.paa",
					"\fr2035_armor_f\data\btdf\fr2035_mbt_01_mlrs_co.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa"
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
					"\fr2035_armor_f\data\daguet\fr2035_mbt_01_body_co.paa",
					"\fr2035_armor_f\data\daguet\fr2035_mbt_01_mlrs_co.paa",
					"a3\Armor_F\Data\camonet_nato_desert_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_FR2035_arifle_416F_blk_F
			{
				weapon="FR2035_arifle_416F_blk_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
};
