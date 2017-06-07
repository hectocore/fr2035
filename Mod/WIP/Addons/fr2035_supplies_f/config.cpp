class CfgPatches
{
	class FR2035_Supplies_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Ammoboxes and Supplies";
		url="http://modflavors.com";
		requiredAddons[]=
		{
			"FR2035_Data_F",
			"A3_Weapons_F"
		};
		requiredVersion=1.66;
		units[]={
			"B_FR2035_AssaultPack_ce",
			"B_FR2035_AssaultPack_ce_LAT",
			"B_FR2035_AssaultPack_ce_Medic",
			"B_FR2035_AssaultPack_ce_Repair",
			"B_FR2035_AssaultPack_ce_ReconLAT",
			"B_FR2035_AssaultPack_ce_ReconMedic",
			"B_FR2035_AssaultPack_ce_CTRGMedic_F",
			"B_FR2035_AssaultPack_ce_CTRGLAT_F",
			"B_FR2035_Kitbag_ce",
			"B_FR2035_Kitbag_ce_Exp",
			"B_FR2035_Kitbag_ce_AT",
			"B_FR2035_Kitbag_ce_AA",
			"B_FR2035_Kitbag_ce_Eng",
			"B_FR2035_Kitbag_ce_ReconExp",
			"B_FR2035_Kitbag_ce_AAR",
			"B_FR2035_Kitbag_ce_CTRGExp_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_AssaultPack_Base;
	class B_FR2035_AssaultPack_ce: B_AssaultPack_Base
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce";
		scope=2;
		displayName="$STR_FR2035_AssaultPack_ce";
		picture="\fr2035_supplies_f\data\ui\fr2035_icon_b_compact_ce_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_supplies_f\data\fr2035_backpack_compact_ce_co.paa"
		};
	};
	class B_FR2035_AssaultPack_ce_LAT: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_LAT";
		scope=1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=2;
			};
		};
	};
	class B_FR2035_AssaultPack_ce_Medic: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_Medic";
		scope=1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class B_FR2035_AssaultPack_ce_Repair: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_Repair";
		scope=1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
	class B_FR2035_AssaultPack_ce_ReconLAT: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_ReconLAT";
		scope=1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=2;
			};
		};
	};
	class B_FR2035_AssaultPack_ce_ReconMedic: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_ReconMedic";
		scope=1;
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=1;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=1;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=5;
			};
		};
	};
	class B_FR2035_AssaultPack_ce_CTRGMedic_F: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_CTRGMedic_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=1;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=1;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=5;
			};
		};
	};
	class B_FR2035_AssaultPack_ce_CTRGLAT_F: B_FR2035_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_AssaultPack_ce_CTRGLAT_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=2;
			};
		};
	};
	class B_Kitbag_Base;
	class B_FR2035_Kitbag_ce: B_Kitbag_Base
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_Kitbag_ce";
		scope=2;
		picture="\fr2035_supplies_f\data\ui\fr2035_icon_b_fast_ce_ca.paa";
		displayName="$STR_FR2035_Kitbag_ce";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_supplies_f\data\fr2035_backpack_fast_ce_co.paa"
		};
	};
	class B_FR2035_Kitbag_ce_Exp: B_FR2035_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_Kitbag_ce_Exp";
		scope=1;
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
		};
	};
	class B_FR2035_Kitbag_ce_AT: B_FR2035_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_Kitbag_ce_AT";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
		};
	};
	class B_FR2035_Kitbag_ce_AA: B_FR2035_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_Kitbag_ce_AA";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
	};
	class B_FR2035_Kitbag_ce_Eng: B_FR2035_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_Kitbag_ce_Eng";
		scope=1;
		class TransportMagazines
		{
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
				count=1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
		};
	};
	class B_FR2035_Kitbag_ce_ReconExp: B_FR2035_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_Kitbag_ce_ReconExp";
		scope=1;
		class TransportMagazines
		{
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=3;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
	class B_FR2035_Kitbag_ce_AAR: B_FR2035_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_Kitbag_ce_AAR";
		scope=1;
		class TransportMagazines
		{
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=2;
			};
			class _xx_100Rnd_65x39_caseless_mag_Tracer
			{
				magazine="100Rnd_65x39_caseless_mag_Tracer";
				count=2;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optic_tws_mg
			{
				name="optic_tws_mg";
				count=1;
			};
			class _xx_bipod_01_F_snd
			{
				name="bipod_01_F_snd";
				count=1;
			};
			class _xx_muzzle_snds_338_sand
			{
				name="muzzle_snds_338_sand";
				count=1;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
		};
	};
	class B_FR2035_Kitbag_ce_CTRGExp_F: B_FR2035_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="B_FR2035_Kitbag_ce_CTRGExp_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=3;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
};
