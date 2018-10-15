class CfgPatches
{
	class FR2035_Weapons_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Weapons and Accessories";
		url="http://modflavors.com";
		requiredAddons[]=
		{
			"FR2035_Data_F",
			"A3_Weapons_F",
			"A3_Weapons_F_Beta",
			"A3_Weapons_F_Mark"
		};
		requiredVersion=1.66;
		units[]={};
		weapons[]={
			"arifle_FR2035_MX_ACO_F",
			"arifle_FR2035_MX_ACO_pointer_F",
			"arifle_FR2035_MX_ACO_pointer_snds_F",
			"arifle_FR2035_MX_F",
			"arifle_FR2035_MX_GL_ACO_F",
			"arifle_FR2035_MX_GL_ACO_pointer_F",
			"arifle_FR2035_MX_GL_F",
			"arifle_FR2035_MX_GL_Hamr_pointer_F",
			"arifle_FR2035_MX_GL_Holo_pointer_snds_F",
			"arifle_FR2035_MX_Hamr_pointer_F",
			"arifle_FR2035_MX_Holo_pointer_F",
			"arifle_FR2035_MX_pointer_F",
			"arifle_FR2035_MX_RCO_pointer_snds_F",
			"arifle_FR2035_MX_SW_F",
			"arifle_FR2035_MX_SW_Hamr_pointer_F",
			"arifle_FR2035_MX_SW_pointer_F",
			"arifle_FR2035_MXC_ACO_F",
			"arifle_FR2035_MXC_ACO_pointer_F",
			"arifle_FR2035_MXC_ACO_pointer_snds_F",
			"arifle_FR2035_MXC_F",
			"arifle_FR2035_MXC_Holo_F",
			"arifle_FR2035_MXC_Holo_pointer_F",
			"arifle_FR2035_MXC_Holo_pointer_snds_F",
			"arifle_FR2035_MXC_SOS_point_snds_F",
			"arifle_FR2035_MXM_DMS_F",
			"arifle_FR2035_MXM_F",
			"arifle_FR2035_MXM_Hamr_pointer_F",
			"arifle_FR2035_MXM_RCO_pointer_snds_F",
			"arifle_FR2035_MXM_SOS_pointer_F",
			"arifle_FR2035_MXM_DMS_LP_BI_snds_F",
			"arifle_FR2035_MXM_Hamr_LP_BI_F",
			"launch_FR2035_Titan_F",
			"launch_FR2035_Titan_short_F"
		};
	};
};
class CfgWeapons
{
	class arifle_MX_Black_F;
	class arifle_FR2035_MX_F: arifle_MX_Black_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MX_F";
		baseWeapon="arifle_FR2035_MX_F";
		displayName="$STR_FR2035_Arifle_MX_ce";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\mx\fr2035_xmx_base_ce_co.paa",
			"\fr2035_weapons_f\data\mx\fr2035_xmx_short_ce_co.paa"
		};
		picture="\fr2035_weapons_f\data\mx\ui\fr2035_icon_arifle_mx_ce_ca.paa";
	};
	class arifle_MX_GL_Black_F;
	class arifle_FR2035_MX_GL_F: arifle_MX_GL_Black_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MX_GL_F";
		baseWeapon="arifle_FR2035_MX_GL_F";
		displayName="$STR_FR2035_Arifle_MX_GL_ce";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\mx\fr2035_xmx_base_ce_co.paa",
			"\fr2035_weapons_f\data\mx\fr2035_glx_ce_co.paa"
		};
		picture="\fr2035_weapons_f\data\mx\ui\fr2035_icon_arifle_mx_gl_ce_ca.paa";
	};
	class arifle_MX_SW_Black_F;
	class arifle_FR2035_MX_SW_F: arifle_MX_SW_Black_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MX_SW_F";
		baseWeapon="arifle_FR2035_MX_SW_F";
		displayName="$STR_FR2035_Arifle_MX_SW_ce";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\mx\fr2035_xmx_lmg_ce_co.paa"
		};
		picture="\fr2035_weapons_f\data\mx\ui\fr2035_icon_arifle_mx_sw_ce_ca.paa";
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_MXC_Black_F;
	class arifle_FR2035_MXC_F: arifle_MXC_Black_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MXC_F";
		baseWeapon="arifle_FR2035_MXC_F";
		displayName="$STR_FR2035_Arifle_MXC_ce";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\mx\fr2035_xmx_short_ce_co.paa"
		};
		picture="\fr2035_weapons_f\data\mx\ui\fr2035_icon_arifle_mxc_ce_ca.paa";
	};
	class arifle_MXM_Black_F;
	class arifle_FR2035_MXM_F: arifle_MXM_Black_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MXM_F";
		baseWeapon="arifle_FR2035_MXM_F";
		displayName="$STR_FR2035_Arifle_MXM_ce";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\mx\fr2035_xmx_long_ce_co.paa"
		};
		picture="\fr2035_weapons_f\data\mx\ui\fr2035_icon_arifle_mxm_ce_ca.paa";
	};

	class arifle_FR2035_MX_pointer_F: arifle_FR2035_MX_F
	{
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MX_Holo_pointer_F";
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
	class arifle_FR2035_MX_Hamr_pointer_F: arifle_FR2035_MX_F
	{
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MXC_Holo_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
		};
	};
	class arifle_FR2035_MXC_Holo_pointer_F: arifle_FR2035_MXC_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MXC_Holo_pointer_F";
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
	class arifle_FR2035_MX_SW_pointer_F: arifle_FR2035_MX_SW_F
	{
		baseWeapon="arifle_FR2035_MX_SW_F";
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
	class arifle_FR2035_MXC_ACO_F: arifle_FR2035_MXC_F
	{
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MXC_Holo_pointer_snds_F";
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
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MX_GL_Holo_pointer_snds_F";
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
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_FR2035_MXM_SOS_pointer_F: arifle_FR2035_MXM_F
	{
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
		author="$STR_FR2035_Author";
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
	class arifle_FR2035_MXM_Hamr_LP_BI_F: arifle_FR2035_MXM_Hamr_pointer_F
	{
		author="$STR_FR2035_Author";
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
	class launch_B_Titan_F;
	class launch_FR2035_Titan_F: launch_B_Titan_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="launch_FR2035_Titan_F";
		displayName="$STR_FR2035_Launcher_Titan";
		picture="\fr2035_weapons_f\data\titan\ui\fr2035_launch_titan_f_x_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\titan\fr2035_launch_titan_f_01_co.paa",
			"\fr2035_weapons_f\data\titan\fr2035_launch_titan_f_02_co.paa"
		};
	};
	class launch_B_Titan_short_F;
	class launch_FR2035_Titan_short_F: launch_B_Titan_short_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="launch_FR2035_Titan_short_F";
		displayName="$STR_FR2035_Launcher_Titan_Short";
		picture="\fr2035_weapons_f\data\titan\ui\fr2035_launch_titan_short_f_x_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\titan\fr2035_launch_titan_f_01_co.paa",
			"\fr2035_weapons_f\data\titan\fr2035_launch_titan_short_f_02_co.paa"
		};
	};
};
