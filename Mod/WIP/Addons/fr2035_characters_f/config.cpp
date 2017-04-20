class CfgPatches
{
	class FR2035_Characters_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Characters and Clothing";
		url="http://modflavors.com";
		requiredAddons[]=
		{
			"FR2035_Data_F",
			"A3_Characters_F"
		};
		requiredVersion=1.66;
		units[]={
			"FR2035_Soldier_F"
		};
		weapons[]={
			"U_FR2035_CombatUniform_ce"
		};
	};
};
class CfgVehicles
{
	class SoldierWB;
	class UniformSlotInfo;

	class FR2035_Soldier_base_F: SoldierWB
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_Soldier_base_F";
		expansion=1;
		identityTypes[]=
		{
			"LanguageGRE_F",
			"Head_NATO",
			"G_NATO_default"
		};
		faceType="Man_A3";
		side=1;
		faction="FR2035_F";
		genericNames="FR2035Men";
		vehicleClass="Men";
		editorSubcategory="EdSubcat_Personnel";
		portrait="";
		picture="";
		icon="iconMan";
		accuracy=2.3;
		threat[]={1,0.1,0.1};
		camouflage=1.4;
		minFireTime=7;
		cost=100000;
		canCarryBackPack=1;
		scope=0;
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Characters_F\BLUFOR\Data\clothing1.rvmat",
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\characters_f\common\data\coveralls.rvmat",
				"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
				"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[]={3,1};
		nakedUniform="U_BasicBody";
		uniformClass="U_FR2035_CombatUniform_ce";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType=602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType=604;
				};
				class Googles: UniformSlotInfo
				{
					slotType=603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType=605;
				};
			};
		};
		armor=2;
		armorStructural=0.38;
		explosionShielding=0.037999999;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_characters_f\data\fr2035_clothing_co.paa"
		};
		class EventHandlers;
		weapons[]=
		{
			"arifle_MX_ACO_pointer_F",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_MX_ACO_pointer_F",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"HandGrenade",
			"HandGrenade"
		};
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
	};
	class FR2035_Soldier_F: FR2035_Soldier_base_F
	{
		author="$STR_FR2035_Author";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Soldier_F.jpg";
		_generalMacro="FR2035_Soldier_F";
		scope=2;
		displayName="$STR_A3_CfgVehicles_B_Soldier_F0";
		uniformAccessories[]={};
		nakedUniform="U_BasicBody";
		uniformClass="U_FR2035_CombatUniform_ce";
		role="Rifleman";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType=602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType=604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType=605;
				};
			};
		};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;

	class U_FR2035_CombatUniform_ce: Uniform_Base
	{
		author="$STR_FR2035_Author";
		scope=2;
		displayName="$STR_FR2035_Uniform_ce";
		picture="\fr2035_characters_f\data\ui\fr2035_icon_u_combatuniform_ce_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fr2035_characters_f\data\suitpacks\fr2035_suitpack_soldier_ce_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FR2035_Soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
};
