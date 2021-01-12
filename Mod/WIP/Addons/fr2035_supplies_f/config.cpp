class CfgPatches
{
	class FR2035_Supplies_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Ammoboxes and Supplies";
		url="https://github.com/hectocore/fr2035";
		requiredAddons[]=
		{
			"FR2035_Data_F",
			"A3_Weapons_F",
			"A3_Supplies_F_Orange",
			"A3_Weapons_F_Tank"
		};
		requiredVersion=1.66;
		units[]={
			"FR2035_B_AssaultPack_ce",
			"FR2035_B_AssaultPack_ce_LAT",
			"FR2035_B_AssaultPack_ce_Medic",
			"FR2035_B_AssaultPack_ce_Repair",
			"FR2035_B_AssaultPack_ce_ReconLAT",
			"FR2035_B_AssaultPack_ce_ReconMedic",
			"FR2035_B_AssaultPack_ce_CTRGMedic_F",
			"FR2035_B_AssaultPack_ce_CTRGLAT_F",
			"FR2035_B_Bergen_ce",
			"FR2035_B_Carryall_ce",
			"FR2035_B_Carryall_ce_Ammo",
			"FR2035_B_Carryall_ce_AAT",
			"FR2035_B_Carryall_ce_AAA",
			"FR2035_B_Kitbag_ce",
			"FR2035_B_Kitbag_ce_Exp",
			"FR2035_B_Kitbag_ce_AT",
			"FR2035_B_Kitbag_ce_AA",
			"FR2035_B_Kitbag_ce_Eng",
			"FR2035_B_Kitbag_ce_ReconExp",
			"FR2035_B_Kitbag_ce_AAR",
			"FR2035_B_Kitbag_ce_CTRGExp_F",
			"FR2035_B_TacticalPack_ce",
			"FR2035_B_Carryall_ce_Mine",
			"FR2035_B_AssaultPack_ce_LAT2"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_AssaultPack_Base;
	class FR2035_B_AssaultPack_ce: B_AssaultPack_Base
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_AssaultPack_ce";
		scope=2;
		displayName="$STR_FR2035_AssaultPack_ce";
		picture="\fr2035_supplies_f\data\ui\fr2035_icon_b_compact_ce_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_supplies_f\data\fr2035_backpack_compact_ce_co.paa"
		};
	};
	class FR2035_B_AssaultPack_ce_LAT: FR2035_B_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_AssaultPack_ce_LAT";
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
	class FR2035_B_AssaultPack_ce_Medic: FR2035_B_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_AssaultPack_ce_Medic";
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
	class FR2035_B_AssaultPack_ce_Repair: FR2035_B_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_AssaultPack_ce_Repair";
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
	class FR2035_B_AssaultPack_ce_ReconLAT: FR2035_B_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_AssaultPack_ce_ReconLAT";
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
	class FR2035_B_AssaultPack_ce_ReconMedic: FR2035_B_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_AssaultPack_ce_ReconMedic";
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
	class FR2035_B_AssaultPack_ce_CTRGMedic_F: FR2035_B_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_AssaultPack_ce_CTRGMedic_F";
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
	class FR2035_B_AssaultPack_ce_CTRGLAT_F: FR2035_B_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_AssaultPack_ce_CTRGLAT_F";
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
	class B_Bergen_Base_F;
	class FR2035_B_Bergen_ce: B_Bergen_Base_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Bergen_ce";
		scope=2;
		displayName="$STR_FR2035_Bergen_ce";
		picture="\fr2035_supplies_f\data\ui\fr2035_icon_b_bergen_ce_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_supplies_f\data\fr2035_backpack_bergen_ce_co.paa"
		};
	};
	class B_Carryall_Base;
	class FR2035_B_Carryall_ce: B_Carryall_Base
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Carryall_ce";
		scope=2;
		displayName="$STR_FR2035_Carryall_ce";
		picture="\fr2035_supplies_f\data\ui\fr2035_icon_b_carryall_ce_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_supplies_f\data\fr2035_backpack_carryall_ce_co.paa"
		};
	};
	class FR2035_B_Carryall_ce_Ammo: FR2035_B_Carryall_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Carryall_ce_Ammo";
		scope=1;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=6;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=1;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=1;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=4;
			};
			class _xx_10Rnd_338_Mag
			{
				magazine="10Rnd_338_Mag";
				count=2;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=2;
			};
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
	class FR2035_B_Carryall_ce_AAT: FR2035_B_Carryall_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Carryall_ce_AAT";
		scope=1;
		class TransportMagazines
		{
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
		};
	};
	class FR2035_B_Carryall_ce_AAA: FR2035_B_Carryall_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Carryall_ce_AAA";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=3;
			};
		};
	};
	class B_Kitbag_Base;
	class FR2035_B_Kitbag_ce: B_Kitbag_Base
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Kitbag_ce";
		scope=2;
		picture="\fr2035_supplies_f\data\ui\fr2035_icon_b_fast_ce_ca.paa";
		displayName="$STR_FR2035_Kitbag_ce";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_supplies_f\data\fr2035_backpack_fast_ce_co.paa"
		};
	};
	class FR2035_B_Kitbag_ce_Exp: FR2035_B_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Kitbag_ce_Exp";
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
	class FR2035_B_Kitbag_ce_AT: FR2035_B_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Kitbag_ce_AT";
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
	class FR2035_B_Kitbag_ce_AA: FR2035_B_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Kitbag_ce_AA";
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
	class FR2035_B_Kitbag_ce_Eng: FR2035_B_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Kitbag_ce_Eng";
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
	class FR2035_B_Kitbag_ce_ReconExp: FR2035_B_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Kitbag_ce_ReconExp";
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
	class FR2035_B_Kitbag_ce_AAR: FR2035_B_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Kitbag_ce_AAR";
		scope=1;
		class TransportMagazines
		{
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=1;
			};
			class _xx_200Rnd_556x45_Box_Tracer_Red_F
			{
				magazine="200Rnd_556x45_Box_Tracer_Red_F";
				count=1;
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
			class _xx_bipod_01_F_blk
			{
				name="bipod_01_F_blk";
				count=1;
			};
			class _xx_muzzle_snds_338_black
			{
				name="muzzle_snds_338_black";
				count=1;
			};
			class _xx_muzzle_snds_M
			{
				name="muzzle_snds_M";
				count=1;
			};
		};
	};
	class FR2035_B_Kitbag_ce_CTRGExp_F: FR2035_B_Kitbag_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Kitbag_ce_CTRGExp_F";
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
	class B_TacticalPack_Base;
	class FR2035_B_TacticalPack_ce: B_TacticalPack_Base
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_TacticalPack_ce";
		scope=2;
		displayName="$STR_FR2035_TacticalPack_ce";
		picture="\fr2035_supplies_f\data\ui\fr2035_icon_b_small_ce_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_supplies_f\data\fr2035_backpack_small_ce_co.paa"
		};
	};
	class FR2035_B_Carryall_ce_Mine: FR2035_B_Carryall_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_Carryall_ce_Mine";
		scope=1;
		class TransportMagazines
		{
			class _xx_APERSMine_Range_Mag
			{
				magazine="APERSMine_Range_Mag";
				count=2;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=2;
			};
			class _xx_APERSMineDispenser_Mag
			{
				magazine="APERSMineDispenser_Mag";
				count=2;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine="APERSTripMine_Wire_Mag";
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
	class FR2035_B_AssaultPack_ce_LAT2: FR2035_B_AssaultPack_ce
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_B_AssaultPack_ce_LAT2";
		scope=1;
		class TransportMagazines
		{
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=2;
			};
			class _xx_MRAWS_HE_F
			{
				magazine="MRAWS_HE_F";
				count=1;
			};
		};
	};
};
