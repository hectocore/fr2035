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
			"A3_Weapons_F"
		};
		requiredVersion=1.66;
		units[]={};
		weapons[]={
			"arifle_FR2035_MX_ce_F",
			"arifle_FR2035_MX_GL_ce_F",
			"arifle_FR2035_MX_SW_ce_F",
			"arifle_FR2035_MXC_ce_F",
			"arifle_FR2035_MXM_ce_F"
		};
	};
};
class CfgWeapons
{
	class arifle_MX_Black_F;
	class arifle_FR2035_MX_ce_F: arifle_MX_Black_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MX_ce_F";
		baseWeapon="arifle_FR2035_MX_ce_F";
		displayName="$STR_FR2035_Arifle_MX_ce";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\mx\fr2035_xmx_base_ce_co.paa",
			"\fr2035_weapons_f\data\mx\fr2035_xmx_short_ce_co.paa"
		};
		picture="\fr2035_weapons_f\data\mx\ui\fr2035_icon_arifle_mx_ce_ca.paa";
	};
	class arifle_MX_GL_Black_F;
	class arifle_FR2035_MX_GL_ce_F: arifle_MX_GL_Black_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MX_GL_ce_F";
		baseWeapon="arifle_FR2035_MX_GL_ce_F";
		displayName="$STR_FR2035_Arifle_MX_GL_ce";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\mx\fr2035_xmx_base_ce_co.paa",
			"\fr2035_weapons_f\data\mx\fr2035_glx_ce_co.paa"
		};
		picture="\fr2035_weapons_f\data\mx\ui\fr2035_icon_arifle_mx_gl_ce_ca.paa";
	};
	class arifle_MX_SW_Black_F;
	class arifle_FR2035_MX_SW_ce_F: arifle_MX_SW_Black_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MX_SW_ce_F";
		baseWeapon="arifle_FR2035_MX_SW_ce_F";
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
	class arifle_FR2035_MXC_ce_F: arifle_MXC_Black_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MXC_ce_F";
		baseWeapon="arifle_FR2035_MXC_ce_F";
		displayName="$STR_FR2035_Arifle_MXC_ce";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\mx\fr2035_xmx_short_ce_co.paa"
		};
		picture="\fr2035_weapons_f\data\mx\ui\fr2035_icon_arifle_mxc_ce_ca.paa";
	};
	class arifle_MXM_Black_F;
	class arifle_FR2035_MXM_ce_F: arifle_MXM_Black_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="arifle_FR2035_MXM_ce_F";
		baseWeapon="arifle_FR2035_MXM_ce_F";
		displayName="$STR_FR2035_Arifle_MXM_ce";
		hiddenSelectionsTextures[]=
		{
			"\fr2035_weapons_f\data\mx\fr2035_xmx_long_ce_co.paa"
		};
		picture="\fr2035_weapons_f\data\mx\ui\fr2035_icon_arifle_mxm_ce_ca.paa";
	};
};
