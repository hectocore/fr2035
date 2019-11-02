class CfgPatches
{
	class FR2035_Soft_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Unarmored Land Vehicles";
		url="https://github.com/hectocore";
		requiredAddons[]=
		{
			"FR2035_Characters_F",
			"FR2035_Data_F",
			"A3_Soft_F",
			"A3_Soft_F_Beta"
		};
		requiredVersion=1.66;
		units[]={
			"FR2035_MRAP_01_F",
			"FR2035_MRAP_01_gmg_F",
			"FR2035_MRAP_01_hmg_F",
			"FR2035_Truck_01_covered_F",
			"FR2035_Truck_01_transport_F"
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
				displayName="CE";
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
			class Daguet
			{
				displayName="Daguet";
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
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_black_mag";
				count=16;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_black_mag";
				count=6;
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
			class _xx_arifle_MX_F
			{
				weapon="arifle_FR2035_MX_F";
				count=2;
			};
		};
	};
	class B_MRAP_01_gmg_F;
	class FR2035_MRAP_01_gmg_F: B_MRAP_01_gmg_F
	{
		author="$STR_FR2035_Author";
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
				displayName="CE";
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
			class Daguet
			{
				displayName="Daguet";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\daguet\fr2035_mrap_01_base_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_mrap_01_adds_co.paa",
					"\fr2035_data_f\vehicles\fr2035_turret_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_black_mag";
				count=16;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_black_mag";
				count=6;
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
			class _xx_arifle_MX_F
			{
				weapon="arifle_FR2035_MX_F";
				count=2;
			};
		};
	};
	class B_MRAP_01_hmg_F;
	class FR2035_MRAP_01_hmg_F: B_MRAP_01_hmg_F
	{
		author="$STR_FR2035_Author";
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
				displayName="CE";
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
			class Daguet
			{
				displayName="Daguet";
				author="$STR_FR2035_Author";
				textures[]=
				{
					"\fr2035_soft_f\data\daguet\fr2035_mrap_01_base_co.paa",
					"\fr2035_soft_f\data\daguet\fr2035_mrap_01_adds_co.paa",
					"\fr2035_data_f\vehicles\fr2035_turret_co.paa"
				};
				factions[]=
				{
					"FR2035_F"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_black_mag";
				count=16;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_black_mag";
				count=6;
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
			class _xx_arifle_MX_F
			{
				weapon="arifle_FR2035_MX_F";
				count=2;
			};
		};
	};
	class B_Truck_01_covered_F;
	class FR2035_Truck_01_covered_F: B_Truck_01_covered_F
	{
		author="$STR_FR2035_Author";
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
				displayName="CE";
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
			class Daguet
			{
				displayName="Daguet";
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
				displayName="CE";
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
			class Daguet
			{
				displayName="Daguet";
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
};
