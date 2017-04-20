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
	class FR2035_Soldier_02_f: FR2035_Soldier_base_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_Soldier_02_f";
		scope=0;
		displayName="Rifleman 2";
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[]={3,1};
		uniformClass="U_B_CombatUniform_mcam_tshirt";
		armor=2;
		armorStructural=0.5;
		explosionShielding=0.050000001;
	};
	class FR2035_Soldier_03_f: FR2035_Soldier_base_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_Soldier_03_f";
		scope=0;
		displayName="Rifleman 3";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		modelSides[]={3,1};
		uniformClass="U_B_CombatUniform_mcam_vest";
		armor=2;
		armorStructural=0.5;
		explosionShielding=0.050000001;
	};
	class FR2035_Soldier_04_f: FR2035_Soldier_base_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_Soldier_04_f";
		scope=0;
		displayName="Rifleman 4";
		model="\A3\Characters_F\Common\coveralls.p3d";
		modelSides[]={3,1};
		uniformClass="U_B_HeliPilotCoveralls";
		role="Crewman";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\coveralls_sage_co.paa"
		};
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=2;
				material=-1;
				name="pelvis";
				passThrough=0.050000001;
				radius=0.2;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=2;
				material=-1;
				name="spine1";
				passThrough=0.050000001;
				radius=0.15000001;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=2;
				material=-1;
				name="spine2";
				passThrough=0.050000001;
				radius=0.15000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=2;
				material=-1;
				name="spine3";
				passThrough=0.050000001;
				radius=0.15000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.050000001;
				radius=0.16;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=0.60000002;
				material=-1;
				name="arms";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitHands: HitArms
			{
				armor=0.60000002;
				material=-1;
				name="hands";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=0.60000002;
				material=-1;
				name="legs";
				passThrough=0.5;
				radius=0.12;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(HitHead * 2) + HitBody + ((HitHands + HitLegs) / 2) + Total";
			};
		};
		armor=2;
		armorStructural=0.25;
		explosionShielding=0.025;
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\characters_f\common\data\pilot_suit.rvmat",
				"A3\Characters_F\Common\Data\W1_pilot_suit.rvmat",
				"A3\Characters_F\Common\Data\W1_pilot_suit.rvmat",
				"A3\characters_f\common\data\coveralls.rvmat",
				"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
				"A3\Characters_F\Common\Data\coveralls_injury.rvmat"
			};
		};
	};
	class FR2035_Soldier_05_f: FR2035_Soldier_base_F
	{
		author="$STR_FR2035_Author";
		_generalMacro="FR2035_Soldier_05_f";
		scope=0;
		displayName="Rifleman 5";
		model="\A3\characters_F\Common\pilot_f.p3d";
		modelSides[]={3,1};
		uniformClass="U_B_PilotCoveralls";
		role="Crewman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\pilot_suit_nato_co.paa",
			"\A3\Characters_F\Common\Data\pilot_helmet_nato_co.paa"
		};
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=2;
				material=-1;
				name="pelvis";
				passThrough=0.050000001;
				radius=0.2;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=2;
				material=-1;
				name="spine1";
				passThrough=0.050000001;
				radius=0.15000001;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=2;
				material=-1;
				name="spine2";
				passThrough=0.050000001;
				radius=0.15000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=2;
				material=-1;
				name="spine3";
				passThrough=0.050000001;
				radius=0.15000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.050000001;
				radius=0.16;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=0.60000002;
				material=-1;
				name="arms";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitHands: HitArms
			{
				armor=0.60000002;
				material=-1;
				name="hands";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=0.60000002;
				material=-1;
				name="legs";
				passThrough=0.5;
				radius=0.12;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(HitHead * 2) + HitBody + ((HitHands + HitLegs) / 2) + Total";
			};
		};
		armor=2;
		armorStructural=0.075000003;
		explosionShielding=0.0074999998;
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\characters_f\common\data\pilot_suit.rvmat",
				"A3\Characters_F\Common\Data\W1_pilot_suit.rvmat",
				"A3\Characters_F\Common\Data\W1_pilot_suit.rvmat"
			};
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
	class U_FR2035_CombatUniform_ce_tshirt: Uniform_Base
	{
		author="$STR_FR2035_Author";
		scope=2;
		displayName="$STR_FR2035_Uniform_ce_tshirt";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_soldier_AR_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_FR2035_CombatUniform_ce_vest: Uniform_Base
	{
		author="$STR_FR2035_Author";
		scope=2;
		displayName="$STR_FR2035_Uniform_ce_vest";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Soldier_SL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
};
