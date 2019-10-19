#include "BIS_AddonInfo.hpp"
// French Army 2035 Mod
// Made for Arma 3
// Made by Hector Corral
// In order to use the content of this addon in your own mod, please contact me on steam.

class CfgPatches
{
	class FR2035_weapons_F
	{
		units[]={};
		weapons[]=
		{
			"arifle_FR2035_MXC_F",
			"arifle_FR2035_MX_F",
			"arifle_FR2035_MX_GL_F",
			"arifle_FR2035_MX_SW_F",
			"arifle_FR2035_MXM_F",
			"arifle_FR2035_MX_pointer_F",
			"arifle_FR2035_MX_Holo_pointer_F",
			"arifle_FR2035_MX_Hamr_pointer_F",
			"arifle_FR2035_MX_ACO_pointer_F",
			"arifle_FR2035_MX_ACO_F",
			"arifle_FR2035_MX_GL_ACO_F",
			"arifle_FR2035_MX_GL_ACO_pointer_F",
			"arifle_FR2035_MX_GL_Hamr_pointer_F",
			"arifle_FR2035_MXC_Holo_F",
			"arifle_FR2035_MXC_Holo_pointer_F",
			"arifle_FR2035_MX_SW_pointer_F",
			"arifle_FR2035_MX_SW_Hamr_pointer_F",
			"arifle_FR2035_MXM_Hamr_pointer_F",
			"arifle_FR2035_MXM_Hamr_LP_BI_F",
			"arifle_FR2035_MXC_ACO_F",
			"arifle_FR2035_MXC_Holo_pointer_snds_F",
			"arifle_FR2035_MXC_SOS_point_snds_F",
			"arifle_FR2035_MXC_ACO_pointer_snds_F",
			"arifle_FR2035_MXC_ACO_pointer_F",
			"arifle_FR2035_MX_ACO_pointer_snds_F",
			"arifle_FR2035_MX_RCO_pointer_snds_F",
			"arifle_FR2035_MX_GL_Holo_pointer_snds_F",
			"arifle_FR2035_MXM_SOS_pointer_F",
			"arifle_FR2035_MXM_RCO_pointer_snds_F",
			"arifle_FR2035_MXM_DMS_F",
			"arifle_FR2035_MXM_DMS_LP_BI_snds_F",
			"arifle_FR2035_MXC_Camo_F",
			"arifle_FR2035_MX_Camo_F",
			"arifle_FR2035_MX_GL_Camo_F",
			"arifle_FR2035_MX_SW_Camo_F",
			"arifle_FR2035_MXM_Camo_F",
			"arifle_FR2035_MX_Camo_pointer_F",
			"arifle_FR2035_MX_Camo_Holo_pointer_F",
			"arifle_FR2035_MX_Camo_Hamr_pointer_F",
			"arifle_FR2035_MX_Camo_ACO_pointer_F",
			"arifle_FR2035_MX_Camo_ACO_F",
			"arifle_FR2035_MX_GL_Camo_ACO_F",
			"arifle_FR2035_MX_GL_Camo_ACO_pointer_F",
			"arifle_FR2035_MX_GL_Camo_Hamr_pointer_F",
			"arifle_FR2035_MXC_Camo_Holo_F",
			"arifle_FR2035_MXC_Camo_Holo_pointer_F",
			"arifle_FR2035_MX_SW_Camo_pointer_F",
			"arifle_FR2035_MX_SW_Camo_Hamr_pointer_F",
			"arifle_FR2035_MXM_Camo_Hamr_pointer_F",
			"arifle_FR2035_MXM_Camo_Hamr_LP_BI_F",
			"arifle_FR2035_MXC_Camo_ACO_F",
			"arifle_FR2035_MXC_Camo_Holo_pointer_snds_F",
			"arifle_FR2035_MXC_Camo_SOS_point_snds_F",
			"arifle_FR2035_MXC_Camo_ACO_pointer_snds_F",
			"arifle_FR2035_MXC_Camo_ACO_pointer_F",
			"arifle_FR2035_MX_Camo_ACO_pointer_snds_F",
			"arifle_FR2035_MX_Camo_RCO_pointer_snds_F",
			"arifle_FR2035_MX_GL_Camo_Holo_pointer_snds_F",
			"arifle_FR2035_MXM_Camo_SOS_pointer_F",
			"arifle_FR2035_MXM_Camo_RCO_pointer_snds_F",
			"arifle_FR2035_MXM_Camo_DMS_F",
			"arifle_FR2035_MXM_Camo_DMS_LP_BI_snds_F"
		};
		requiredVersion=1.56;
		requiredAddons[]=
		{
			"FR2035_language_F"
		};
		version="16-02-2016";
		author="$STR_fr2035_author";
	};
};

class CfgWeapons
{
	class arifle_MXC_F;
	class arifle_FR2035_MXC_F: arifle_MXC_F
	{
		baseWeapon="arifle_FR2035_MXC_F";
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_F";
		displayName="$STR_fr2035_cfgweapons_arifle_xmc0";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\fr2035_mxc_co.paa"
		};
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_cqc_black_X_CA.paa";
	};
	class arifle_MX_F;
	class arifle_FR2035_MX_F: arifle_MX_F
	{
		baseWeapon="arifle_FR2035_MX_F";
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_F";
		displayName="$STR_fr2035_cfgweapons_arifle_xmx0";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\fr2035_mx_co.paa",
			"\fr2035_weapons_f\data\fr2035_mxc_co.paa"
		};
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_black_X_CA.paa";
	};
	class arifle_MX_GL_F;
	class arifle_FR2035_MX_GL_F: arifle_MX_GL_F
	{
		baseWeapon="arifle_FR2035_MX_GL_F";
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_GL_F";
		displayName="$STR_fr2035_cfgweapons_arifle_xmx_gl0";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\fr2035_mx_co.paa",
			"\fr2035_weapons_f\data\fr2035_glx_co.paa"
		};
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_gl_black_X_CA.paa";
	};
	class arifle_MX_SW_F;
	class arifle_FR2035_MX_SW_F: arifle_MX_SW_F
	{
		baseWeapon="arifle_FR2035_MX_SW_F";
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_SW_F";
		displayName="$STR_fr2035_cfgweapons_arifle_xm_lsw0";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\fr2035_mx_sw_co.paa"
		};
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_lmg_black_X_CA.paa";
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_MXM_F;
	class arifle_FR2035_MXM_F: arifle_MXM_F
	{
		baseWeapon="arifle_FR2035_MXM_F";
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_F";
		displayName="$STR_fr2035_cfgweapons_arifle_xmm0";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\fr2035_mxm_co.paa"
		};
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_dmr_black_X_CA.paa";
	};
	class arifle_FR2035_MX_pointer_F: arifle_FR2035_MX_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_pointer_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_FR2035_MX_Holo_pointer_F: arifle_FR2035_MX_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_Holo_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_FR2035_MX_Hamr_pointer_F: arifle_FR2035_MX_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_Hamr_pointer_F";
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
	class arifle_FR2035_MX_ACO_pointer_F: arifle_FR2035_MX_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_ACO_pointer_F";
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
	class arifle_FR2035_MX_ACO_F: arifle_FR2035_MX_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class arifle_FR2035_MX_GL_ACO_F: arifle_FR2035_MX_GL_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_GL_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class arifle_FR2035_MX_GL_ACO_pointer_F: arifle_FR2035_MX_GL_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_GL_ACO_pointer_F";
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
	class arifle_FR2035_MX_GL_Hamr_pointer_F: arifle_FR2035_MX_GL_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_GL_Hamr_pointer_F";
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
	class arifle_FR2035_MXC_Holo_F: arifle_FR2035_MXC_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_Holo_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
		};
	};
	class arifle_FR2035_MXC_Holo_pointer_F: arifle_FR2035_MXC_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_Holo_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_FR2035_MX_SW_pointer_F: arifle_FR2035_MX_SW_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_SW_pointer_F";
		class LinkedItems
		{
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
	class arifle_FR2035_MX_SW_Hamr_pointer_F: arifle_FR2035_MX_SW_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_SW_Hamr_pointer_F";
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
	class arifle_FR2035_MXM_Hamr_pointer_F: arifle_FR2035_MXM_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_Hamr_pointer_F";
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
	class arifle_FR2035_MXM_Hamr_LP_BI_F: arifle_FR2035_MXM_Hamr_pointer_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_Hamr_LP_BI_F";
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
	class arifle_FR2035_MXC_ACO_F: arifle_FR2035_MXC_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class arifle_FR2035_MXC_Holo_pointer_snds_F: arifle_FR2035_MXC_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_Holo_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_FR2035_MXC_SOS_point_snds_F: arifle_FR2035_MXC_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_SOS_point_snds_F";
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
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_FR2035_MXC_ACO_pointer_snds_F: arifle_FR2035_MXC_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_ACO_pointer_snds_F";
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
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_FR2035_MXC_ACO_pointer_F: arifle_FR2035_MXC_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_ACO_pointer_F";
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
	class arifle_FR2035_MX_ACO_pointer_snds_F: arifle_FR2035_MX_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_ACO_pointer_snds_F";
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
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_FR2035_MX_RCO_pointer_snds_F: arifle_FR2035_MX_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_RCO_pointer_snds_F";
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
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_FR2035_MX_GL_Holo_pointer_snds_F: arifle_FR2035_MX_GL_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_GL_Holo_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_FR2035_MXM_SOS_pointer_F: arifle_FR2035_MXM_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_SOS_pointer_F";
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
	class arifle_FR2035_MXM_RCO_pointer_snds_F: arifle_FR2035_MXM_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_RCO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ARCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_FR2035_MXM_DMS_F: arifle_FR2035_MXM_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_DMS_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
		};
	};
	class arifle_FR2035_MXM_DMS_LP_BI_snds_F: arifle_FR2035_MXM_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_DMS_LP_BI_snds_F";
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
				item="muzzle_snds_h";
			};
		};
	};
	class arifle_FR2035_MXC_Camo_F: arifle_MXC_F
	{
		baseWeapon="arifle_FR2035_MXC_Camo_F";
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_Camo_F";
		displayName="$STR_fr2035_cfgweapons_arifle_camo_xmc0";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\fr2035_mxc_camo_co.paa"
		};
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_cqc_black_X_CA.paa";
	};
	class arifle_FR2035_MX_Camo_F: arifle_MX_F
	{
		baseWeapon="arifle_FR2035_MX_Camo_F";
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_Camo_F";
		displayName="$STR_fr2035_cfgweapons_arifle_camo_xmx0";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\fr2035_mx_camo_co.paa",
			"\fr2035_weapons_f\data\fr2035_mxc_camo_co.paa"
		};
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_black_X_CA.paa";
	};
	class arifle_FR2035_MX_GL_Camo_F: arifle_MX_GL_F
	{
		baseWeapon="arifle_FR2035_MX_GL_Camo_F";
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_GL_Camo_F";
		displayName="$STR_fr2035_cfgweapons_arifle_camo_xmx_gl0";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\fr2035_mx_camo_co.paa",
			"\fr2035_weapons_f\data\fr2035_glx_co.paa"
		};
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_gl_black_X_CA.paa";
	};
	class arifle_FR2035_MX_SW_Camo_F: arifle_MX_SW_F
	{
		baseWeapon="arifle_FR2035_MX_SW_Camo_F";
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_SW_Camo_F";
		displayName="$STR_fr2035_cfgweapons_arifle_camo_xm_lsw0";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\fr2035_mx_sw_camo_co.paa"
		};
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_lmg_black_X_CA.paa";
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_FR2035_MXM_Camo_F: arifle_MXM_F
	{
		baseWeapon="arifle_FR2035_MXM_Camo_F";
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_Camo_F";
		displayName="$STR_fr2035_cfgweapons_arifle_camo_xmm0";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\fr2035_mxm_camo_co.paa"
		};
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_dmr_black_X_CA.paa";
	};
	class arifle_FR2035_MX_Camo_pointer_F: arifle_FR2035_MX_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_Camo_pointer_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_FR2035_MX_Camo_Holo_pointer_F: arifle_FR2035_MX_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_Camo_Holo_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_FR2035_MX_Camo_Hamr_pointer_F: arifle_FR2035_MX_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_Camo_Hamr_pointer_F";
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
	class arifle_FR2035_MX_Camo_ACO_pointer_F: arifle_FR2035_MX_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_Camo_ACO_pointer_F";
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
	class arifle_FR2035_MX_Camo_ACO_F: arifle_FR2035_MX_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_Camo_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class arifle_FR2035_MX_GL_Camo_ACO_F: arifle_FR2035_MX_GL_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_GL_Camo_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class arifle_FR2035_MX_GL_Camo_ACO_pointer_F: arifle_FR2035_MX_GL_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_GL_Camo_ACO_pointer_F";
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
	class arifle_FR2035_MX_GL_Camo_Hamr_pointer_F: arifle_FR2035_MX_GL_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_GL_Camo_Hamr_pointer_F";
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
	class arifle_FR2035_MXC_Camo_Holo_F: arifle_FR2035_MXC_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_Camo_Holo_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
		};
	};
	class arifle_FR2035_MXC_Camo_Holo_pointer_F: arifle_FR2035_MXC_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_Camo_Holo_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_FR2035_MX_SW_Camo_pointer_F: arifle_FR2035_MX_SW_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_SW_Camo_pointer_F";
		class LinkedItems
		{
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
	class arifle_FR2035_MX_SW_Camo_Hamr_pointer_F: arifle_FR2035_MX_SW_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_SW_Camo_Hamr_pointer_F";
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
	class arifle_FR2035_MXM_Camo_Hamr_pointer_F: arifle_FR2035_MXM_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_Camo_Hamr_pointer_F";
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
	class arifle_FR2035_MXM_Camo_Hamr_LP_BI_F: arifle_FR2035_MXM_Camo_Hamr_pointer_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_Camo_Hamr_LP_BI_F";
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
	class arifle_FR2035_MXC_Camo_ACO_F: arifle_FR2035_MXC_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_Camo_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class arifle_FR2035_MXC_Camo_Holo_pointer_snds_F: arifle_FR2035_MXC_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_Camo_Holo_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_FR2035_MXC_Camo_SOS_point_snds_F: arifle_FR2035_MXC_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_Camo_SOS_point_snds_F";
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
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_FR2035_MXC_Camo_ACO_pointer_snds_F: arifle_FR2035_MXC_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_Camo_ACO_pointer_snds_F";
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
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_FR2035_MXC_Camo_ACO_pointer_F: arifle_FR2035_MXC_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXC_Camo_ACO_pointer_F";
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
	class arifle_FR2035_MX_Camo_ACO_pointer_snds_F: arifle_FR2035_MX_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_Camo_ACO_pointer_snds_F";
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
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_FR2035_MX_Camo_RCO_pointer_snds_F: arifle_FR2035_MX_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_Camo_RCO_pointer_snds_F";
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
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_FR2035_MX_GL_Camo_Holo_pointer_snds_F: arifle_FR2035_MX_GL_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MX_GL_Camo_Holo_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_FR2035_MXM_Camo_SOS_pointer_F: arifle_FR2035_MXM_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_Camo_SOS_pointer_F";
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
	class arifle_FR2035_MXM_Camo_RCO_pointer_snds_F: arifle_FR2035_MXM_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_Camo_RCO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ARCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_FR2035_MXM_Camo_DMS_F: arifle_FR2035_MXM_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_Camo_DMS_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
		};
	};
	class arifle_FR2035_MXM_Camo_DMS_LP_BI_snds_F: arifle_FR2035_MXM_Camo_F
	{
		author="$STR_fr2035_author";
		_generalMacro="arifle_FR2035_MXM_Camo_DMS_LP_BI_snds_F";
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
				item="muzzle_snds_h";
			};
		};
	};
};

enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
}