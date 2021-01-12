class CfgPatches
{
	class FR2035_Soft_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Unarmored Land Vehicles";
		url="https://github.com/hectocore/fr2035";
		requiredAddons[]=
		{
			"FR2035_Characters_F",
			"FR2035_Data_F",
			"A3_Soft_F",
			"A3_Soft_F_Beta",
			"A3_Soft_F_Exp",
			"A3_Soft_F_Enoch"
		};
		requiredVersion=1.66;
		units[]={
			"FR2035_MRAP_01_F",
			"FR2035_MRAP_01_gmg_F",
			"FR2035_MRAP_01_hmg_F",
			"FR2035_Truck_01_covered_F",
			"FR2035_Truck_01_transport_F",
			"FR2035_Truck_01_mover_F",
			"FR2035_Truck_01_box_F",
			"FR2035_Truck_01_Repair_F",
			"FR2035_Truck_01_ammo_F",
			"FR2035_Truck_01_fuel_F",
			"FR2035_Truck_01_medical_F",
			"FR2035_Truck_01_cargo_F",
			"FR2035_Truck_01_flatbed_F",
			"FR2035_Quadbike_01_F",
			"FR2035_LSV_01_unarmed_F",
			"FR2035_LSV_01_armed_F",
			"FR2035_LSV_01_AT_F",
			"FR2035_LSV_01_light_CTRG_F",
			"FR2035_LSV_01_unarmed_CTRG_F",
			"FR2035_LSV_01_armed_CTRG_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_MRAP_01_F;
	class FR2035_MRAP_01_F: B_MRAP_01_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_MRAP_01_F.jpg";
		_generalMacro="FR2035_MRAP_01_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_lite_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"riotpolice"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_mrap_01_base_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_01_adds_co.paa",
			""
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_mrap_01_base_co.paa",
					"\fr2035_soft_f\data\fr2035_mrap_01_adds_co.paa",
					""
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
					"\fr2035_soft_f\data\btdf\fr2035_mrap_01_base_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_mrap_01_adds_co.paa",
					""
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
					"\fr2035_soft_f\data\daguet\fr2035_mrap_01_base_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_mrap_01_adds_co.paa",
					""
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
				count=16;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=12;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
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
	class B_MRAP_01_gmg_F;
	class FR2035_MRAP_01_gmg_F: B_MRAP_01_gmg_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_MRAP_01_gmg_F.jpg";
		_generalMacro="FR2035_MRAP_01_gmg_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_lite_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_mrap_01_base_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_01_adds_co.paa",
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
					"\fr2035_soft_f\data\fr2035_mrap_01_base_co.paa",
					"\fr2035_soft_f\data\fr2035_mrap_01_adds_co.paa",
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
					"\fr2035_soft_f\data\btdf\fr2035_mrap_01_base_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_mrap_01_adds_co.paa",
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
					"\fr2035_soft_f\data\daguet\fr2035_mrap_01_base_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_mrap_01_adds_co.paa",
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
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=16;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=12;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
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
	class B_MRAP_01_hmg_F;
	class FR2035_MRAP_01_hmg_F: B_MRAP_01_hmg_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_MRAP_01_hmg_F.jpg";
		_generalMacro="FR2035_MRAP_01_hmg_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_lite_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_mrap_01_base_co.paa",
			"\fr2035_soft_f\data\fr2035_mrap_01_adds_co.paa",
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
					"\fr2035_soft_f\data\fr2035_mrap_01_base_co.paa",
					"\fr2035_soft_f\data\fr2035_mrap_01_adds_co.paa",
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
					"\fr2035_soft_f\data\btdf\fr2035_mrap_01_base_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_mrap_01_adds_co.paa",
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
					"\fr2035_soft_f\data\daguet\fr2035_mrap_01_base_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_mrap_01_adds_co.paa",
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
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=16;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=12;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
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
	class B_Truck_01_covered_F;
	class FR2035_Truck_01_covered_F: B_Truck_01_covered_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Truck_01_covered_F.jpg";
		_generalMacro="FR2035_Truck_01_covered_F";
		crew="FR2035_Soldier_F";
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
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_cargo_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_cover_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_cargo_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_cover_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_cargo_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_cover_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_cargo_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_cover_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
	class B_Truck_01_transport_F;
	class FR2035_Truck_01_transport_F: B_Truck_01_transport_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Truck_01_transport_F.jpg";
		_generalMacro="FR2035_Truck_01_transport_F";
		crew="FR2035_Soldier_F";
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
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_cargo_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_cargo_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_cargo_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_cargo_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
	class B_Truck_01_mover_F;
	class FR2035_Truck_01_mover_F: B_Truck_01_mover_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Truck_01_mover_F.jpg";
		_generalMacro="FR2035_Truck_01_mover_F";
		crew="FR2035_Soldier_F";
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
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_mprimer_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_mprimer_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_mprimer_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_mprimer_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
	class B_Truck_01_box_F;
	class FR2035_Truck_01_box_F: B_Truck_01_box_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Truck_01_box_F.jpg";
		_generalMacro="FR2035_Truck_01_box_F";
		crew="FR2035_Soldier_F";
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
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ammo_co.paa",
			"\a3\structures_f\data\metal\containers\containers_02_set_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ammo_co.paa",
					"\a3\structures_f\data\metal\containers\containers_02_set_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ammo_co.paa",
					"\a3\structures_f\data\metal\containers\containers_02_set_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ammo_co.paa",
					"\a3\structures_f\data\metal\containers\containers_02_set_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
	class B_Truck_01_Repair_F;
	class FR2035_Truck_01_Repair_F: B_Truck_01_Repair_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Truck_01_Repair_F.jpg";
		_generalMacro="FR2035_Truck_01_Repair_F";
		crew="FR2035_Soldier_F";
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
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ammo_co.paa",
			"\a3\structures_f\data\metal\containers\containers_02_set_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ammo_co.paa",
					"\a3\structures_f\data\metal\containers\containers_02_set_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ammo_co.paa",
					"\a3\structures_f\data\metal\containers\containers_02_set_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ammo_co.paa",
					"\a3\structures_f\data\metal\containers\containers_02_set_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
	class B_Truck_01_ammo_F;
	class FR2035_Truck_01_ammo_F: B_Truck_01_ammo_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Truck_01_ammo_F.jpg";
		_generalMacro="FR2035_Truck_01_ammo_F";
		crew="FR2035_Soldier_F";
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
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ammo_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ammo_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ammo_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ammo_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
	class B_Truck_01_fuel_F;
	class FR2035_Truck_01_fuel_F: B_Truck_01_fuel_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Truck_01_fuel_F.jpg";
		_generalMacro="FR2035_Truck_01_fuel_F";
		crew="FR2035_Soldier_F";
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
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_fuel_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_fuel_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_fuel_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_fuel_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
	class B_Truck_01_medical_F;
	class FR2035_Truck_01_medical_F: B_Truck_01_medical_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Truck_01_medical_F.jpg";
		_generalMacro="FR2035_Truck_01_medical_F";
		crew="FR2035_Soldier_F";
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
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_cargo_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_cover_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_cargo_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_cover_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_cargo_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_cover_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_cargo_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_cover_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
	class B_Truck_01_cargo_F;
	class FR2035_Truck_01_cargo_F: B_Truck_01_cargo_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Truck_01_cargo_F.jpg";
		_generalMacro="FR2035_Truck_01_cargo_F";
		crew="FR2035_Soldier_F";
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
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ammo_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_fret_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ammo_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_fret_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ammo_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_fret_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ammo_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_fret_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
	class B_Truck_01_flatbed_F;
	class FR2035_Truck_01_flatbed_F: B_Truck_01_flatbed_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Truck_01_flatbed_F.jpg";
		_generalMacro="FR2035_Truck_01_flatbed_F";
		crew="FR2035_Soldier_F";
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
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_ammo_co.paa",
			"\fr2035_soft_f\data\fr2035_truck_01_fret_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_ammo_co.paa",
					"\fr2035_soft_f\data\fr2035_truck_01_fret_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_ammo_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_truck_01_fret_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ext_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_ammo_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_truck_01_fret_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
	class B_Quadbike_01_F;
	class FR2035_Quadbike_01_F: B_Quadbike_01_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_Quadbike_01_F.jpg";
		_generalMacro="FR2035_Quadbike_01_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_quadbike_01_co.paa",
			"\fr2035_soft_f\data\fr2035_quadbike_01_wheel_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_quadbike_01_co.paa",
					"\fr2035_soft_f\data\fr2035_quadbike_01_wheel_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_quadbike_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_quadbike_01_wheel_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_quadbike_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_quadbike_01_wheel_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
	class B_LSV_01_unarmed_F;
	class FR2035_LSV_01_unarmed_F: B_LSV_01_unarmed_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_LSV_01_unarmed_F.jpg";
		_generalMacro="FR2035_LSV_01_unarmed_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_lsv_01_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_02_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_03_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_adds_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_adds_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_adds_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_adds_co.paa"
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
				count=16;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=12;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
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
	class B_LSV_01_armed_F;
	class FR2035_LSV_01_armed_F: B_LSV_01_armed_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_LSV_01_armed_F.jpg";
		_generalMacro="FR2035_LSV_01_armed_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_lsv_01_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_02_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_03_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_adds_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_adds_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_adds_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_adds_co.paa"
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
				count=16;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=12;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
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
	class B_LSV_01_AT_F;
	class FR2035_LSV_01_AT_F: B_LSV_01_AT_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_LSV_01_AT_F.jpg";
		_generalMacro="FR2035_LSV_01_AT_F";
		crew="FR2035_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4",
			"camo_launcher",
			"camo_tube"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_lsv_01_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_02_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_03_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_adds_co.paa",
			"\fr2035_weapons_f\data\titan\fr2035_launch_titan_f_01_co.paa",
			"\fr2035_weapons_f\data\titan\fr2035_launch_titan_short_f_02_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_adds_co.paa",
					"\fr2035_weapons_f\data\titan\fr2035_launch_titan_f_01_co.paa",
					"\fr2035_weapons_f\data\titan\fr2035_launch_titan_short_f_02_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_adds_co.paa",
					"\fr2035_weapons_f\data\titan\fr2035_launch_titan_f_01_co.paa",
					"\fr2035_weapons_f\data\titan\fr2035_launch_titan_short_f_02_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_adds_co.paa",
					"\fr2035_weapons_f\data\titan\fr2035_launch_titan_f_01_co.paa",
					"\fr2035_weapons_f\data\titan\fr2035_launch_titan_short_f_02_co.paa"
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
				count=16;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=12;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
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
	class B_CTRG_LSV_01_light_F;
	class FR2035_LSV_01_light_CTRG_F: B_CTRG_LSV_01_light_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_LSV_01_light_CTRG_F.jpg";
		_generalMacro="FR2035_LSV_01_light_CTRG_F";
		crew="FR2035_CTRG_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_CTRG_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_lsv_01_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_02_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_03_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_adds_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_adds_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_adds_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_adds_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
	class B_T_LSV_01_unarmed_CTRG_F;
	class FR2035_LSV_01_unarmed_CTRG_F: B_T_LSV_01_unarmed_CTRG_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_LSV_01_unarmed_F.jpg";
		_generalMacro="FR2035_LSV_01_unarmed_CTRG_F";
		crew="FR2035_CTRG_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_CTRG_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_lsv_01_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_02_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_03_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_adds_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_adds_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_adds_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_adds_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
	class B_T_LSV_01_armed_CTRG_F;
	class FR2035_LSV_01_armed_CTRG_F: B_T_LSV_01_armed_CTRG_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\fr2035_editorpreviews_f\data\cfgvehicles\FR2035_LSV_01_armed_F.jpg";
		_generalMacro="FR2035_LSV_01_armed_CTRG_F";
		crew="FR2035_CTRG_Soldier_F";
		typicalCargo[]=
		{
			"FR2035_CTRG_Soldier_F"
		};
		side=1;
		faction="FR2035_F";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_soft_f\data\fr2035_lsv_01_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_02_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_03_co.paa",
			"\fr2035_soft_f\data\fr2035_lsv_adds_co.paa"
		};
		class TextureSources
		{
			class CE
			{
				displayName="$STR_FR2035_Camo_CE";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\fr2035_lsv_adds_co.paa"
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
					"\fr2035_soft_f\data\btdf\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\btdf\fr2035_lsv_adds_co.paa"
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
					"\fr2035_soft_f\data\daguet\fr2035_lsv_01_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_02_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_03_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_lsv_adds_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
	};
};
