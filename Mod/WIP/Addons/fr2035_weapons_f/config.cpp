class CfgPatches
{
	class FR2035_Weapons_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Weapons and Accessories";
		url="https://github.com/hectocore/fr2035";
		requiredAddons[]=
		{
			"FR2035_Data_F",
			"A3_Weapons_F",
			"A3_Weapons_F_Beta",
			"A3_Weapons_F_Mark",
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Enoch"
		};
		requiredVersion=1.66;
		units[]={};
		weapons[]={
			// Based on: arifle_SPAR_01_blk_F
			// Replaces
			// arifle_MX_F
			// arifle_MXC_F
			// arifle_SPAR_01_blk_F
			"FR2035_arifle_416F_blk_F",
			"FR2035_arifle_416F_blk_ACO_F",
			"FR2035_arifle_416F_blk_ACO_pointer_F",
			"FR2035_arifle_416F_blk_ACO_pointer_snds_F",
			"FR2035_arifle_416F_blk_Hamr_pointer_F",
			"FR2035_arifle_416F_blk_Holo_pointer_F",
			"FR2035_arifle_416F_blk_pointer_F",
			"FR2035_arifle_416F_blk_RCO_pointer_snds_F",
			"FR2035_arifle_416F_blk_Holo_F",
			"FR2035_arifle_416F_blk_Holo_pointer_snds_F",
			"FR2035_arifle_416F_blk_SOS_point_snds_F",
			"FR2035_arifle_416F_blk_ERCO_Pointer_F",

			// Based on: arifle_SPAR_01_GL_blk_F
			// Replaces:
			// arifle_MX_GL_F
			// arifle_SPAR_01_GL_blk_F
			"FR2035_arifle_416F_GL_blk_F",
			"FR2035_arifle_416F_GL_blk_ACO_F",
			"FR2035_arifle_416F_GL_blk_ACO_pointer_F",
			"FR2035_arifle_416F_GL_blk_Hamr_pointer_F",
			"FR2035_arifle_416F_GL_blk_Holo_pointer_snds_F",
			"FR2035_arifle_416F_GL_blk_ERCO_Pointer_F",

			// Based on: arifle_SPAR_02_blk_F (without drum mag, and full auto off)
			// Replaces:
			// arifle_MXM_F
			"FR2035_arifle_416FS_blk_F",
			"FR2035_arifle_416FS_blk_DMS_F",
			"FR2035_arifle_416FS_blk_Hamr_pointer_F",
			"FR2035_arifle_416FS_blk_RCO_pointer_snds_F",
			"FR2035_arifle_416FS_blk_SOS_pointer_F",
			"FR2035_arifle_416FS_blk_DMS_LP_BI_snds_F",
			"FR2035_arifle_416FS_blk_Hamr_LP_BI_F",

			// Based on: arifle_SPAR_03_blk_F
			// Replaces:
			// srifle_DMR_03_F
			// srifle_DMR_02_F
			// arifle_SPAR_03_blk_F
			"FR2035_srifle_417_blk_F",
			"FR2035_srifle_417_blk_ACO_F",
			"FR2035_srifle_417_blk_AMS_F",
			"FR2035_srifle_417_blk_ARCO_F",
			"FR2035_srifle_417_blk_DMS_F",
			"FR2035_srifle_417_blk_DMS_snds_F",
			"FR2035_srifle_417_blk_MRCO_F",
			"FR2035_srifle_417_blk_SOS_F",
			"FR2035_srifle_417_blk_AMS_LP_F",
			"FR2035_srifle_417_blk_AMS_LP_S_F",
			"FR2035_srifle_417_blk_MOS_Pointer_Bipod_F",

			// Based on: LMG_03_F
			// Replaces:
			// arifle_MX_SW_F
			// arifle_SPAR_02_blk_F
			"FR2035_LMG_Minimi_blk_F",
			"FR2035_LMG_Minimi_blk_Hamr_pointer_F",
			"FR2035_LMG_Minimi_blk_pointer_F",
			"FR2035_LMG_Minimi_blk_ERCO_Pointer_F",

			// Based on: MMG_02_black_F
			// Replaces:
			// MMG_02_sand_F
			"FR2035_MMG_02_black_RCO_LP_F",

			// Based on: launch_B_Titan_F
			// Replaces:
			// launch_B_Titan_F
			// launch_B_Titan_short_F
			"FR2035_launch_Titan_F",
			"FR2035_launch_Titan_short_F"
		};
	};
};
class CfgWeapons
{
	class arifle_SPAR_01_blk_F;
	class FR2035_arifle_416F_blk_F: arifle_SPAR_01_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_blk_F";
		baseWeapon="FR2035_arifle_416F_blk_F";
		scope=2;
		displayName="$STR_FR2035_arifle_416F_blk";
		picture="\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
		magazines[]=
		{
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\416f\fr2035_arifle_spar_01_blk_f_01_co.paa",
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"
		};
		aiDispersionCoefX=3;
		aiDispersionCoefY=5;
	};
	class arifle_SPAR_01_GL_blk_F;
	class FR2035_arifle_416F_GL_blk_F: arifle_SPAR_01_GL_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_GL_blk_F";
		baseWeapon="FR2035_arifle_416F_GL_blk_F";
		scope=2;
		displayName="$STR_FR2035_arifle_416F_GL_blk";
		picture="\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_blk_F_X_CA.paa";
		magazines[]=
		{
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\416f\fr2035_arifle_spar_01_blk_f_01_co.paa",
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa",
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_blk_F_01_co.paa"
		};
		aiDispersionCoefX=3;
		aiDispersionCoefY=5;
	};
	class arifle_SPAR_02_blk_F;
	class arifle_SPAR_02_blk_F_copy: arifle_SPAR_02_blk_F {
		scope=0;
		// You must copy the base class in order to retrieve its child class
		class Single;
		class FullAuto;
	};
	class FR2035_arifle_416FS_blk_F: arifle_SPAR_02_blk_F_copy
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416FS_blk_F";
		baseWeapon="FR2035_arifle_416FS_blk_F";
		scope=2;
		displayName="$STR_FR2035_arifle_416FS_blk";
		descriptionShort="$STR_A3_CfgWeapons_arifle_SPAR_01_base_F1";
		picture="\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\UI\arifle_SPAR_02_blk_F_X_CA.paa";
		magazines[]=
		{
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		cursor="srifle";
		modes[]=
		{
			"FullAuto",
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1",
			"fullauto_medium"
		};
		class Single: Single
		{
			reloadTime=0.1;
			dispersion=0.00057999999;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.07;
			dispersion=0.00057999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.40000001;
			maxRange=900;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\416f\fr2035_arifle_spar_01_blk_f_01_co.paa",
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"
		};
		class LinkedItems {};
		aiDispersionCoefX=2;
		aiDispersionCoefY=3;
	};
	class arifle_SPAR_03_blk_F;
	class FR2035_srifle_417_blk_F: arifle_SPAR_03_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_srifle_417_blk_F";
		baseWeapon="FR2035_srifle_417_blk_F";
		scope=2;
		displayName="$STR_FR2035_srifle_417_blk";
		picture="\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_SPAR_03_blk_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_01_co.paa",
			"\fr2035_weapons_f\data\417\fr2035_arifle_spar_03_blk_f_02_co.paa",
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa"
		};
		aiDispersionCoefX=2;
		aiDispersionCoefY=3;
	};
	class LMG_03_F;
	class FR2035_LMG_Minimi_blk_F: LMG_03_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_LMG_Minimi_blk_F";
		baseWeapon="FR2035_LMG_Minimi_blk_F";
		scope=2;
		displayName="$STR_FR2035_LMG_Minimi_blk";
		picture="\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\UI\icon_LMG_03_F_X_CA.paa";
		magazines[]=
		{
			"200Rnd_556x45_Box_Red_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"200Rnd_556x45_Box_Tracer_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\minimi\fr2035_lmg_03_f_body_co.paa",
			"\fr2035_weapons_f\data\minimi\fr2035_lmg_03_f_acc_co.paa",
			"\A3\Weapons_F_Enoch\Machineguns\M200\Data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"\fr2035_weapons_f\data\minimi\fr2035_lmg_03_f_body_metal.rvmat",
			"\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\lmg_03_f_acc.rvmat",
			"\A3\Weapons_F\Machineguns\M200\data\grip_metal.rvmat"
		};
		aiDispersionCoefX=16;
		aiDispersionCoefY=20;
	};

	class FR2035_arifle_416F_blk_ACO_F: FR2035_arifle_416F_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_blk_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class FR2035_arifle_416F_blk_ACO_pointer_F: FR2035_arifle_416F_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_blk_ACO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class FR2035_arifle_416F_blk_ACO_pointer_snds_F: FR2035_arifle_416F_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_blk_ACO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class FR2035_arifle_416F_blk_Hamr_pointer_F: FR2035_arifle_416F_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_blk_Hamr_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class FR2035_arifle_416F_blk_Holo_pointer_F: FR2035_arifle_416F_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_blk_Holo_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class FR2035_arifle_416F_blk_pointer_F: FR2035_arifle_416F_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_blk_pointer_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class FR2035_arifle_416F_blk_RCO_pointer_snds_F: FR2035_arifle_416F_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_blk_RCO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class FR2035_arifle_416F_blk_Holo_F: FR2035_arifle_416F_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_blk_Holo_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
		};
	};
	class FR2035_arifle_416F_blk_Holo_pointer_snds_F: FR2035_arifle_416F_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_blk_Holo_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class FR2035_arifle_416F_blk_SOS_point_snds_F: FR2035_arifle_416F_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_blk_SOS_point_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class FR2035_arifle_416F_blk_ERCO_Pointer_F: FR2035_arifle_416F_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_blk_ERCO_Pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};

	class FR2035_arifle_416F_GL_blk_ACO_F: FR2035_arifle_416F_GL_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_GL_blk_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class FR2035_arifle_416F_GL_blk_ACO_pointer_F: FR2035_arifle_416F_GL_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_GL_blk_ACO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class FR2035_arifle_416F_GL_blk_Hamr_pointer_F: FR2035_arifle_416F_GL_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_GL_blk_Hamr_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class FR2035_arifle_416F_GL_blk_Holo_pointer_snds_F: FR2035_arifle_416F_GL_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_GL_blk_Holo_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class FR2035_arifle_416F_GL_blk_ERCO_Pointer_F: FR2035_arifle_416F_GL_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416F_GL_blk_ERCO_Pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};

	class FR2035_arifle_416FS_blk_DMS_F: FR2035_arifle_416FS_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416FS_blk_DMS_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
		};
	};
	class FR2035_arifle_416FS_blk_Hamr_pointer_F: FR2035_arifle_416FS_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416FS_blk_Hamr_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class FR2035_arifle_416FS_blk_RCO_pointer_snds_F: FR2035_arifle_416FS_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416FS_blk_RCO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class FR2035_arifle_416FS_blk_SOS_pointer_F: FR2035_arifle_416FS_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416FS_blk_SOS_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class FR2035_arifle_416FS_blk_DMS_LP_BI_snds_F: FR2035_arifle_416FS_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416FS_blk_DMS_LP_BI_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptics
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class FR2035_arifle_416FS_blk_Hamr_LP_BI_F: FR2035_arifle_416FS_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_arifle_416FS_blk_Hamr_LP_BI_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};

	class FR2035_srifle_417_blk_ACO_F: FR2035_srifle_417_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_srifle_417_blk_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
		};
	};
	class FR2035_srifle_417_blk_AMS_F: FR2035_srifle_417_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_srifle_417_blk_AMS_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_AMS";
			};
		};
	};
	class FR2035_srifle_417_blk_ARCO_F: FR2035_srifle_417_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_srifle_417_blk_ARCO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
		};
	};
	class FR2035_srifle_417_blk_DMS_F: FR2035_srifle_417_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_srifle_417_blk_DMS_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
		};
	};
	class FR2035_srifle_417_blk_DMS_snds_F: FR2035_srifle_417_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_srifle_417_blk_DMS_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_b";
			};
		};
	};
	class FR2035_srifle_417_blk_MRCO_F: FR2035_srifle_417_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_srifle_417_blk_MRCO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class FR2035_srifle_417_blk_SOS_F: FR2035_srifle_417_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_srifle_417_blk_SOS_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
		};
	};
	class FR2035_srifle_417_blk_AMS_LP_F: FR2035_srifle_417_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_srifle_417_blk_AMS_LP_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_AMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class FR2035_srifle_417_blk_AMS_LP_S_F: FR2035_srifle_417_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_srifle_417_blk_AMS_LP_S_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_AMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_b";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class FR2035_srifle_417_blk_MOS_Pointer_Bipod_F: FR2035_srifle_417_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_srifle_417_blk_MOS_Pointer_Bipod_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};

	class FR2035_LMG_Minimi_blk_Hamr_pointer_F: FR2035_LMG_Minimi_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_LMG_Minimi_blk_Hamr_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class FR2035_LMG_Minimi_blk_pointer_F: FR2035_LMG_Minimi_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_LMG_Minimi_blk_pointer_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class FR2035_LMG_Minimi_blk_ERCO_Pointer_F: FR2035_LMG_Minimi_blk_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_LMG_Minimi_blk_ERCO_Pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};

	class MMG_02_black_F;
	class FR2035_MMG_02_black_RCO_LP_F: MMG_02_black_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_MMG_02_black_RCO_LP_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};

	class launch_B_Titan_F;
	class FR2035_launch_Titan_F: launch_B_Titan_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_launch_B_Titan_F";
		displayName="$STR_FR2035_Launcher_Titan";
		picture="\fr2035_weapons_f\data\titan\ui\fr2035_launch_titan_f_x_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\titan\fr2035_launch_titan_f_01_co.paa",
			"\fr2035_weapons_f\data\titan\fr2035_launch_titan_f_02_co.paa"
		};
	};
	class launch_B_Titan_short_F;
	class FR2035_launch_Titan_short_F: launch_B_Titan_short_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_launch_B_Titan_short_F";
		displayName="$STR_FR2035_Launcher_Titan_Short";
		picture="\fr2035_weapons_f\data\titan\ui\fr2035_launch_titan_short_f_x_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\titan\fr2035_launch_titan_f_01_co.paa",
			"\fr2035_weapons_f\data\titan\fr2035_launch_titan_short_f_02_co.paa"
		};
	};
};
