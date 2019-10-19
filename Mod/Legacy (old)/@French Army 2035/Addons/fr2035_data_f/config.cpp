#include "BIS_AddonInfo.hpp"
// French Army 2035 Mod
// Made for Arma 3
// Made by Hector Corral
// In order to use the content of this addon in your own mod, please contact me on steam.

class CfgPatches
{
	class FR2035_data_F
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.56;
		requiredAddons[]=
		{
			"FR2035_language_F"
		};
		version="19-02-2015";
		author="$STR_fr2035_author";
	};
};

class CfgFactionClasses
{
	class FR2035_F
	{
		displayName="$STR_fr2035_faction";
		priority=3;
		side=1;
		icon="\fr2035_data_f\data\fr2035_faction_ca.paa";
		flag="\fr2035_data_f\data\fr2035_flag_co.paa";
	};
};

class CfgWorlds
{
	class GenericNames
	{
		class FrenchMen
		{
			class FirstNames
			{
				Nathan="Nathan";
				Lucas="Lucas";
				Leo="Léo";
				Enzo="Enzo";
				Louis="Louis";
				Gabriel="Gabriel";
				Jules="Jules";
				Timeo="Timéo";
				Hugo="Hugo";
				Arthur="Arthur";
				Ethan="Ethan";
				Raphael="Raphaël";
				Mael="Maël";
				Tom="Tom";
				Noah="Noah";
				Mathis="Mathis";
				Theo="Théo";
				Adam="Adam";
				Nolan="Nolan";
				Clement="Clément";
				Nicolas="Nicolas";
				Pierre="Pierre";
				David="David";
				Sebastien="Sébastien";
				Thomas="Thomas";
				Alexandre="Alexandre";
				Vincent="Vincent";
				Romain="Romain";
				Antoine="Antoine";
				Kevin="Kévin";
				Mathieu="Mathieu";
				Arnaud="Arnaud";
				Paul="Paul";
				Florian="Florian";
				Alexis="Alexis";
				Quentin="Quentin";
				Loic="Loïc";
				Valentin="Valentin";
				Matthieu="Matthieu";
				Adrien="Adrien";
				Julien="Julien";
				Anthony="Anthony";
				Come="Côme";
				Jacques="Jacques";
				Ludovic="Ludovic";
				Benoit="Benoît";
				Jonathan="Jonathan";
				Pierre_olivier="Pierre-Olivier";
				Pierre_nicolas="Pierre-Nicolas";
			};
			class LastNames
			{
				Martin="Martin";
				Bernard="Bernard";
				Dubois="Dubois";
				Robert="Robert";
				Richard="Richard";
				Petit="Petit";
				Durand="Durand";
				Leroy="Leroy";
				Moreau="Moreau";
				Simon="Simon";
				Laurent="Laurent";
				Lefebvre="Lefebvre";
				Michel="Michel";
				Garcia="Garcia";
				Bertrand="Bertrand";
				Roux="Roux";
				Fournier="Fournier";
				Morel="Morel";
				Girard="Girard";
				Andre="Andre";
				Lefevre="Lefevre";
				Mercier="Mercier";
				Dupont="Dupont";
				Lambert="Lambert";
				Bonnet="Bonnet";
				Martinez="Martinez";
				Legrand="Legrand";
				Garnier="Garnier";
				Faure="Faure";
				Rousseau="Rousseau";
				Blanc="Blanc";
				Guerin="Guerin";
				Muller="Muller";
				Henry="Henry";
				Roussel="Roussel";
				Perrin="Perrin";
				Morin="Morin";
				Gauthier="Gauthier";
				Dumont="Dumont";
				Lopez="Lopez";
				Fontaine="Fontaine";
				Chevalier="Chevalier";
				Robin="Robin";
				Masson="Masson";
				Sanchez="Sanchez";
				Gerard="Gerard";
				Boyer="Boyer";
				Lemaire="Lemaire";
				Benoist="Benoist";
			};
		};
	};
};

class CfgGroups
{
	class West
	{
		name="$STR_A3_CfgGroups_West0";
		side=1;
		class FR2035_F
		{
			name="$STR_fr2035_faction";
			class Infantry
			{
				name="$STR_A3_CfgGroups_West_BLU_F_Infantry0";
				class FR2035_InfSquad
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_SL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_LAT_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_M_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_soldier_A_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="FR2035_medic_F";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class FR2035_InfSquad_Weapons
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_SL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_GL_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_M_F";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_soldier_AT_F";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_soldier_AAT_F";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_soldier_A_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="FR2035_medic_F";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class FR2035_InfTeam
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_Soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_GL_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_LAT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class FR2035_InfTeam_AT
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_AT_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_AT_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_AAT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class FR2035_InfTeam_AA
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_AA_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_AA_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_AAA_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class FR2035_InfSentry
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_GL_F";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class FR2035_ReconTeam
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_recon_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_recon_M_F";
						rank="CORPORAL";
						position[]={5,-2,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_recon_medic_F";
						rank="PRIVATE";
						position[]={-5,-2,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_recon_LAT_F";
						rank="CORPORAL";
						position[]={10,-5,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_recon_JTAC_F";
						rank="PRIVATE";
						position[]={-10,-5,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_recon_exp_F";
						rank="PRIVATE";
						position[]={15,-9,0};
					};
				};
				class FR2035_ReconPatrol
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_recon_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_recon_M_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_recon_medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_recon_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class FR2035_ReconSentry
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_recon_M_F";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_recon_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class FR2035_SniperTeam
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit1
					{
						side=1;
						vehicle="FR2035_sniper_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_spotter_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
				};
			};
			class SpecOps
			{
				name="$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
				class FR2035_DiverTeam
				{
					name="$STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_DiverTeam0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_diver_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_diver_exp_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_diver_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_diver_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class FR2035_DiverTeam_Boat
				{
					name="$STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_DiverTeam_Boat0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_diver_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_diver_exp_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_diver_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_diver_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_Boat_Transport_01_F";
						rank="PRIVATE";
						position[]={-32,-57,0};
					};
				};
				class FR2035_DiverTeam_SDV
				{
					name="$STR_A3_cfggroups_West_BLU_F_SpecOps_BUS_DiverTeam_SDV0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_diver_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_diver_exp_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_diver_F";
						rank="PRIVATE";
						position[]={-6,-6,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_diver_F";
						rank="PRIVATE";
						position[]={11,-11,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_SDV_01_F";
						rank="PRIVATE";
						position[]={-16,-16,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_SDV_01_F";
						rank="PRIVATE";
						position[]={21,-21,0};
					};
				};
				class FR2035_SmallTeam_UAV
				{
					name="$STR_A3_cfggroups_uavteam_smallUAV";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_UAV_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_UAV_01_F";
						rank="PRIVATE";
						position[]={13,-12,25};
					};
				};
				class FR2035_ReconTeam_UGV
				{
					name="$STR_A3_cfggroups_uavteam_reconUGV";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_UAV_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_UGV_01_F";
						rank="PRIVATE";
						position[]={-12,-12,0};
					};
				};
				class FR2035_AttackTeam_UGV
				{
					name="$STR_A3_cfggroups_uavteam_attackUGV";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_UAV_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_UGV_01_rcws_F";
						rank="PRIVATE";
						position[]={-12,-12,0};
					};
				};
				class FR2035_ReconTeam_UAV
				{
					name="$STR_A3_cfggroups_uavteam_reconUAV";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_UAV_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_UAV_02_F";
						rank="PRIVATE";
						position[]={23,-22,25};
					};
				};
				class FR2035_AttackTeam_UAV
				{
					name="$STR_A3_cfggroups_uavteam_attackUAV";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_UAV_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_UAV_02_CAS_F";
						rank="PRIVATE";
						position[]={23,-22,25};
					};
				};
			};
			class Support
			{
				name="$STR_A3_CfgGroups_West_BLU_F_Support0";
				class FR2035_Support_CLS
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_medic_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class FR2035_Support_EOD
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_engineer_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_exp_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_exp_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class FR2035_Support_ENG
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_engineer_F";
						rank="CORPORAL";
						position[]={5,-2,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_engineer_F";
						rank="PRIVATE";
						position[]={-5,-2,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_repair_F";
						rank="PRIVATE";
						position[]={10,-5,0};
					};
				};
				class FR2035_Recon_EOD
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Recon_EOD0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_recon_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_recon_exp_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_recon_exp_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_recon_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class FR2035_Support_MG
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_support_MG_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_support_AMG_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
				class FR2035_Support_GMG
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_support_GMG_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_support_AMG_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
				class FR2035_Support_Mort
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_mortar.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_support_Mort_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_support_AMort_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
			};
			class Motorized
			{
				name="$STR_A3_CfgGroups_West_BLU_F_Motorized0";
				class FR2035_MotInf_Team
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_MRAP_01_gmg_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={-12,-12,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_LAT_F";
						rank="PRIVATE";
						position[]={14,-13,0};
					};
				};
				class FR2035_MotInf_AT
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_MRAP_01_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_AT_F";
						rank="CORPORAL";
						position[]={13,-12,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_AT_F";
						rank="CORPORAL";
						position[]={-12,-13,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_AAT_F";
						rank="PRIVATE";
						position[]={18,-17,-2};
					};
				};
				class FR2035_MotInf_AA
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_MRAP_01_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_AA_F";
						rank="CORPORAL";
						position[]={13,-12,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_AA_F";
						rank="CORPORAL";
						position[]={-12,-13,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_AAA_F";
						rank="PRIVATE";
						position[]={18,-17,-2};
					};
				};
				class FR2035_MotInf_MGTeam
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_MRAP_01_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={13,-12,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_support_MG_F";
						rank="CORPORAL";
						position[]={-12,-13,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_support_AMG_F";
						rank="PRIVATE";
						position[]={18,-17,-2};
					};
				};
				class FR2035_MotInf_GMGTeam
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_MRAP_01_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={13,-12,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_support_GMG_F";
						rank="CORPORAL";
						position[]={-12,-13,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_support_AMG_F";
						rank="PRIVATE";
						position[]={18,-17,-2};
					};
				};
				class FR2035_MotInf_MortTeam
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_MRAP_01_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={13,-12,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_support_Mort_F";
						rank="CORPORAL";
						position[]={-12,-12,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_support_AMort_F";
						rank="PRIVATE";
						position[]={18,-17,-2};
					};
				};
			};
			class Mechanized
			{
				name="$STR_A3_CfgGroups_West_BLU_F_Mechanized0";
				class FR2035_MechInfSquad
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_APC_Wheeled_01_cannon_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_SL_F";
						rank="SERGEANT";
						position[]={-12,-12,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_F";
						rank="PRIVATE";
						position[]={13,-14,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_LAT_F";
						rank="CORPORAL";
						position[]={18,-19,-2};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_soldier_M_F";
						rank="PRIVATE";
						position[]={-19,-19,-2};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={23,-24,-3};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={-24,-23,-2};
					};
					class Unit7
					{
						side=1;
						vehicle="FR2035_soldier_A_F";
						rank="PRIVATE";
						position[]={29,-29,-3};
					};
					class Unit8
					{
						side=1;
						vehicle="FR2035_medic_F";
						rank="PRIVATE";
						position[]={-29,-28,-2};
					};
				};
				class FR2035_MechInf_AT
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_APC_Tracked_01_rcws_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_SL_F";
						rank="SERGEANT";
						position[]={-13,-12,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={13,-14,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_AT_F";
						rank="PRIVATE";
						position[]={18,-19,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_soldier_AT_F";
						rank="PRIVATE";
						position[]={-19,-18,-1};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_soldier_AT_F";
						rank="SERGEANT";
						position[]={23,-24,1};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_soldier_AAT_F";
						rank="CORPORAL";
						position[]={-23,-23,0};
					};
					class Unit7
					{
						side=1;
						vehicle="FR2035_soldier_AAT_F";
						rank="PRIVATE";
						position[]={28,-29,1};
					};
					class Unit8
					{
						side=1;
						vehicle="FR2035_soldier_AAT_F";
						rank="PRIVATE";
						position[]={-29,-28,0};
					};
				};
				class FR2035_MechInf_AA
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_APC_Tracked_01_aa_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_SL_F";
						rank="SERGEANT";
						position[]={-13,-17,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={13,-18,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_AA_F";
						rank="PRIVATE";
						position[]={19,-23,-1};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_soldier_AA_F";
						rank="PRIVATE";
						position[]={-19,-24,-2};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_soldier_AA_F";
						rank="SERGEANT";
						position[]={24,-29,-1};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_soldier_AAA_F";
						rank="CORPORAL";
						position[]={-23,-29,-1};
					};
					class Unit7
					{
						side=1;
						vehicle="FR2035_soldier_AAA_F";
						rank="PRIVATE";
						position[]={28,-34,-2};
					};
					class Unit8
					{
						side=1;
						vehicle="FR2035_soldier_AAA_F";
						rank="PRIVATE";
						position[]={-29,-34,-1};
					};
				};
				class FR2035_MechInf_Support
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_APC_Wheeled_01_cannon_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_soldier_SL_F";
						rank="SERGEANT";
						position[]={-12,-12,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_TL_F";
						rank="SERGEANT";
						position[]={13,-14,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_repair_F";
						rank="CORPORAL";
						position[]={18,-19,-3};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_engineer_F";
						rank="PRIVATE";
						position[]={-19,-19,-2};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_medic_F";
						rank="PRIVATE";
						position[]={23,-23,-3};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={-24,-23,-2};
					};
					class Unit7
					{
						side=1;
						vehicle="FR2035_soldier_exp_F";
						rank="PRIVATE";
						position[]={28,-28,-3};
					};
					class Unit8
					{
						side=1;
						vehicle="FR2035_soldier_A_F";
						rank="PRIVATE";
						position[]={-29,-28,-2};
					};
				};
			};
			class Armored
			{
				name="$STR_A3_CfgGroups_West_BLU_F_Armored0";
				class FR2035_TankPlatoon
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_MBT_01_cannon_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_MBT_01_cannon_F";
						rank="SERGEANT";
						position[]={20,-30,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_MBT_01_cannon_F";
						rank="SERGEANT";
						position[]={-20,-30,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_MBT_01_cannon_F";
						rank="CORPORAL";
						position[]={-40,-60,1};
					};
				};
				class FR2035_TankPlatoon_AA
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_MBT_01_cannon_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_APC_Tracked_01_aa_F";
						rank="SERGEANT";
						position[]={20,-30,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_MBT_01_cannon_F";
						rank="SERGEANT";
						position[]={-20,-30,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_APC_Tracked_01_aa_F";
						rank="CORPORAL";
						position[]={-40,-60,2};
					};
				};
				class FR2035_TankSection
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_MBT_01_cannon_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_MBT_01_cannon_F";
						rank="SERGEANT";
						position[]={20,-30,0};
					};
				};
				class FR2035_SPGPlatoon_Scorcher
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGPlatoon_Scorcher0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_MBT_01_arty_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_MBT_01_arty_F";
						rank="SERGEANT";
						position[]={20,-30,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_MBT_01_arty_F";
						rank="SERGEANT";
						position[]={-20,-30,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_MBT_01_arty_F";
						rank="CORPORAL";
						position[]={-40,-60,3};
					};
				};
				class FR2035_SPGSection_Scorcher
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_Scorcher0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_MBT_01_arty_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_MBT_01_arty_F";
						rank="SERGEANT";
						position[]={20,-30,0};
					};
				};
				class FR2035_SPGSection_MLRS
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_MLRS0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_MBT_01_mlrs_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_MBT_01_mlrs_F";
						rank="SERGEANT";
						position[]={20,-30,0};
					};
				};
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