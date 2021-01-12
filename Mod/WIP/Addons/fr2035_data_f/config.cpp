class CfgPatches
{
	class FR2035_Data_F
	{
		author="$STR_FR2035_Author";
		name="French Army 2035 - Main Configuration";
		url="https://github.com/hectocore/fr2035";
		requiredAddons[]=
		{
			"A3_Data_F"
		};
		requiredVersion=1.66;
		units[]={};
		weapons[]={};
	};
};
class CfgMods
{
	class Mod_Base;
	class FR2035: Mod_Base
	{
		picture="\fr2035_data_f\logos\fr2035_icon_ca.paa";
		logo="\fr2035_data_f\logos\fr2035_logo_ca.paa";
		logoOver="\fr2035_data_f\logos\fr2035_logoover_ca.paa";
		logoSmall="\fr2035_data_f\logos\fr2035_logo_small_ca.paa";
		tooltipOwned="$STR_FR2035_Name";
		action="https://github.com/hectocore/fr2035";
		dlcColor[]={0.30980392,0.35686275,0.17647059,1};
		overview="$STR_FR2035_Desc";
		hideName=1;
		hidePicture=0;
		name="$STR_FR2035_Name";
		author="$STR_FR2035_Author";
		overviewPicture="\fr2035_data_f\images\fr2035_overviewpicture_co.paa";
		overviewText="$STR_FR2035_Desc";
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class FR2035
		{
			list[]=
			{
				"FR2035_Armor_F",
				"FR2035_Characters_F",
				"FR2035_Data_F",
				"FR2035_Drones_F",
				"FR2035_EditorPreviews_F",
				"FR2035_Functions_F",
				"FR2035_Language_F",
				"FR2035_Map_Scenes_F",
				"FR2035_Music_F",
				"FR2035_Soft_F",
				"FR2035_Supplies_F",
				"FR2035_Weapons_F",
				"FR2035legacy_boat_F",
				"FR2035legacy_language_F",
				"FR2035legacy_structures_F"
			};
		};
	};
};
class CfgFactionClasses
{
	class FR2035_F
	{
		displayName="$STR_FR2035_Faction_fr";
		priority=3;
		side=1;
		icon="\fr2035_data_f\cfgFactionClasses_fr_ca.paa";
		flag="\fr2035_data_f\flags\flag_fr_co.paa";
	};
};
class CfgWorlds
{
	class GenericNames
	{
		class FR2035Men
		{
			class FirstNames
			{
				Jean="$STR_FR2035_Name_M_Jean";
				Philippe="$STR_FR2035_Name_M_Philippe";
				Michel="$STR_FR2035_Name_M_Michel";
				Alain="$STR_FR2035_Name_M_Alain";
				Patrick="$STR_FR2035_Name_M_Patrick";
				Nicolas="$STR_FR2035_Name_M_Nicolas";
				Christophe="$STR_FR2035_Name_M_Christophe";
				Pierre="$STR_FR2035_Name_M_Pierre";
				Christian="$STR_FR2035_Name_M_Christian";
				Eric="$STR_FR2035_Name_M_Eric";
				Frederic="$STR_FR2035_Name_M_Frederic";
				Laurent="$STR_FR2035_Name_M_Laurent";
				Stephane="$STR_FR2035_Name_M_Stephane";
				David="$STR_FR2035_Name_M_David";
				Pascal="$STR_FR2035_Name_M_Pascal";
				Daniel="$STR_FR2035_Name_M_Daniel";
				Alexandre="$STR_FR2035_Name_M_Alexandre";
				Julien="$STR_FR2035_Name_M_Julien";
				Thierry="$STR_FR2035_Name_M_Thierry";
				Olivier="$STR_FR2035_Name_M_Olivier";
				Bernard="$STR_FR2035_Name_M_Bernard";
				Thomas="$STR_FR2035_Name_M_Thomas";
				Sebastien="$STR_FR2035_Name_M_Sebastien";
				Gerard="$STR_FR2035_Name_M_Gerard";
				Didier="$STR_FR2035_Name_M_Didier";
				Dominique="$STR_FR2035_Name_M_Dominique";
				Vincent="$STR_FR2035_Name_M_Vincent";
				Francois="$STR_FR2035_Name_M_Francois";
				Bruno="$STR_FR2035_Name_M_Bruno";
				Guillaume="$STR_FR2035_Name_M_Guillaume";
				Jerome="$STR_FR2035_Name_M_Jerome";
				Jacques="$STR_FR2035_Name_M_Jacques";
				Marc="$STR_FR2035_Name_M_Marc";
				Maxime="$STR_FR2035_Name_M_Maxime";
				Romain="$STR_FR2035_Name_M_Romain";
				Claude="$STR_FR2035_Name_M_Claude";
				Antoine="$STR_FR2035_Name_M_Antoine";
				Franck="$STR_FR2035_Name_M_Franck";
				Jean_Pierre="$STR_FR2035_Name_M_Jean_Pierre";
				Anthony="$STR_FR2035_Name_M_Anthony";
				Kevin="$STR_FR2035_Name_M_Kevin";
				Gilles="$STR_FR2035_Name_M_Gilles";
				Cedric="$STR_FR2035_Name_M_Cedric";
				Serge="$STR_FR2035_Name_M_Serge";
				Andre="$STR_FR2035_Name_M_Andre";
				Mathieu="$STR_FR2035_Name_M_Mathieu";
				Benjamin="$STR_FR2035_Name_M_Benjamin";
				Patrice="$STR_FR2035_Name_M_Patrice";
				Fabrice="$STR_FR2035_Name_M_Fabrice";
				Joel="$STR_FR2035_Name_M_Joel";
				Jeremy="$STR_FR2035_Name_M_Jeremy";
				Clement="$STR_FR2035_Name_M_Clement";
				Arnaud="$STR_FR2035_Name_M_Arnaud";
				Denis="$STR_FR2035_Name_M_Denis";
				Paul="$STR_FR2035_Name_M_Paul";
				Lucas="$STR_FR2035_Name_M_Lucas";
				Herve="$STR_FR2035_Name_M_Herve";
				Jean_Claude="$STR_FR2035_Name_M_Jean_Claude";
				Sylvain="$STR_FR2035_Name_M_Sylvain";
				Yves="$STR_FR2035_Name_M_Yves";
				Ludovic="$STR_FR2035_Name_M_Ludovic";
				Guy="$STR_FR2035_Name_M_Guy";
				Florian="$STR_FR2035_Name_M_Florian";
				Damien="$STR_FR2035_Name_M_Damien";
				Alexis="$STR_FR2035_Name_M_Alexis";
				Mickael="$STR_FR2035_Name_M_Mickael";
				Quentin="$STR_FR2035_Name_M_Quentin";
				Emmanuel="$STR_FR2035_Name_M_Emmanuel";
				Louis="$STR_FR2035_Name_M_Louis";
				Benoit="$STR_FR2035_Name_M_Benoit";
				Jean_Luc="$STR_FR2035_Name_M_Jean_Luc";
				Fabien="$STR_FR2035_Name_M_Fabien";
				Francis="$STR_FR2035_Name_M_Francis";
				Hugo="$STR_FR2035_Name_M_Hugo";
				Jonathan="$STR_FR2035_Name_M_Jonathan";
				Loic="$STR_FR2035_Name_M_Loic";
				Xavier="$STR_FR2035_Name_M_Xavier";
				Theo="$STR_FR2035_Name_M_Theo";
				Adrien="$STR_FR2035_Name_M_Adrien";
				Raphael="$STR_FR2035_Name_M_Raphael";
				Jean_Francois="$STR_FR2035_Name_M_Jean_Francois";
				Gregory="$STR_FR2035_Name_M_Gregory";
				Robert="$STR_FR2035_Name_M_Robert";
				Michael="$STR_FR2035_Name_M_Michael";
				Valentin="$STR_FR2035_Name_M_Valentin";
				Cyril="$STR_FR2035_Name_M_Cyril";
				Jean_Marc="$STR_FR2035_Name_M_Jean_Marc";
				Rene="$STR_FR2035_Name_M_Rene";
				Lionel="$STR_FR2035_Name_M_Lionel";
				Yannick="$STR_FR2035_Name_M_Yannick";
				Enzo="$STR_FR2035_Name_M_Enzo";
				Yannis="$STR_FR2035_Name_M_Yannis";
				Jean_Michel="$STR_FR2035_Name_M_Jean_Michel";
				Baptiste="$STR_FR2035_Name_M_Baptiste";
				Matthieu="$STR_FR2035_Name_M_Matthieu";
				Remi="$STR_FR2035_Name_M_Remi";
				Georges="$STR_FR2035_Name_M_Georges";
				Aurelien="$STR_FR2035_Name_M_Aurelien";
				Nathan="$STR_FR2035_Name_M_Nathan";
				Jean_Paul="$STR_FR2035_Name_M_Jean_Paul";
				Leo="$STR_FR2035_Name_M_Leo";
				Gabriel="$STR_FR2035_Name_M_Gabriel";
				Adam="$STR_FR2035_Name_M_Adam";
				Timeo="$STR_FR2035_Name_M_Timeo";
				Arthur="$STR_FR2035_Name_M_Arthur";
				Nolan="$STR_FR2035_Name_M_Nolan";
				Jules="$STR_FR2035_Name_M_Jules";
				Liam="$STR_FR2035_Name_M_Liam";
				Ethan="$STR_FR2035_Name_M_Ethan";
				Noah="$STR_FR2035_Name_M_Noah";
				Sacha="$STR_FR2035_Name_M_Sacha";
				Tom="$STR_FR2035_Name_M_Tom";
				Gabin="$STR_FR2035_Name_M_Gabin";
				Mael="$STR_FR2035_Name_M_Mael";
				Mathis="$STR_FR2035_Name_M_Mathis";
			};
			class LastNames
			{
				Martin="$STR_FR2035_Name_F_Martin";
				Bernard="$STR_FR2035_Name_F_Bernard";
				Thomas="$STR_FR2035_Name_F_Thomas";
				Petit="$STR_FR2035_Name_F_Petit";
				Robert="$STR_FR2035_Name_F_Robert";
				Richard="$STR_FR2035_Name_F_Richard";
				Durand="$STR_FR2035_Name_F_Durand";
				Dubois="$STR_FR2035_Name_F_Dubois";
				Moreau="$STR_FR2035_Name_F_Moreau";
				Laurent="$STR_FR2035_Name_F_Laurent";
				Simon="$STR_FR2035_Name_F_Simon";
				Michel="$STR_FR2035_Name_F_Michel";
				Lefebvre="$STR_FR2035_Name_F_Lefebvre";
				Leroy="$STR_FR2035_Name_F_Leroy";
				Roux="$STR_FR2035_Name_F_Roux";
				David="$STR_FR2035_Name_F_David";
				Bertrand="$STR_FR2035_Name_F_Bertrand";
				Morel="$STR_FR2035_Name_F_Morel";
				Fournier="$STR_FR2035_Name_F_Fournier";
				Girard="$STR_FR2035_Name_F_Girard";
				Bonnet="$STR_FR2035_Name_F_Bonnet";
				Dupont="$STR_FR2035_Name_F_Dupont";
				Lambert="$STR_FR2035_Name_F_Lambert";
				Fontaine="$STR_FR2035_Name_F_Fontaine";
				Rousseau="$STR_FR2035_Name_F_Rousseau";
				Vincent="$STR_FR2035_Name_F_Vincent";
				Muller="$STR_FR2035_Name_F_Muller";
				Lefevre="$STR_FR2035_Name_F_Lefevre";
				Faure="$STR_FR2035_Name_F_Faure";
				Andre="$STR_FR2035_Name_F_Andre";
				Mercier="$STR_FR2035_Name_F_Mercier";
				Blanc="$STR_FR2035_Name_F_Blanc";
				Guerin="$STR_FR2035_Name_F_Guerin";
				Boyer="$STR_FR2035_Name_F_Boyer";
				Garnier="$STR_FR2035_Name_F_Garnier";
				Chevalier="$STR_FR2035_Name_F_Chevalier";
				Francois="$STR_FR2035_Name_F_Francois";
				Legrand="$STR_FR2035_Name_F_Legrand";
				Gauthier="$STR_FR2035_Name_F_Gauthier";
				Garcia="$STR_FR2035_Name_F_Garcia";
				Perrin="$STR_FR2035_Name_F_Perrin";
				Robin="$STR_FR2035_Name_F_Robin";
				Clement="$STR_FR2035_Name_F_Clement";
				Morin="$STR_FR2035_Name_F_Morin";
				Nicolas="$STR_FR2035_Name_F_Nicolas";
				Henry="$STR_FR2035_Name_F_Henry";
				Roussel="$STR_FR2035_Name_F_Roussel";
				Mathieu="$STR_FR2035_Name_F_Mathieu";
				Gautier="$STR_FR2035_Name_F_Gautier";
				Masson="$STR_FR2035_Name_F_Masson";
				Marchand="$STR_FR2035_Name_F_Marchand";
				Duval="$STR_FR2035_Name_F_Duval";
				Denis="$STR_FR2035_Name_F_Denis";
				Dumont="$STR_FR2035_Name_F_Dumont";
				Marie="$STR_FR2035_Name_F_Marie";
				Lemaire="$STR_FR2035_Name_F_Lemaire";
				Noel="$STR_FR2035_Name_F_Noel";
				Meyer="$STR_FR2035_Name_F_Meyer";
				Dufour="$STR_FR2035_Name_F_Dufour";
				Meunier="$STR_FR2035_Name_F_Meunier";
				Brun="$STR_FR2035_Name_F_Brun";
				Blanchard="$STR_FR2035_Name_F_Blanchard";
				Giraud="$STR_FR2035_Name_F_Giraud";
				Joly="$STR_FR2035_Name_F_Joly";
				Riviere="$STR_FR2035_Name_F_Riviere";
				Lucas="$STR_FR2035_Name_F_Lucas";
				Brunet="$STR_FR2035_Name_F_Brunet";
				Gaillard="$STR_FR2035_Name_F_Gaillard";
				Barbier="$STR_FR2035_Name_F_Barbier";
				Arnaud="$STR_FR2035_Name_F_Arnaud";
				Martinez="$STR_FR2035_Name_F_Martinez";
				Gerard="$STR_FR2035_Name_F_Gerard";
				Roche="$STR_FR2035_Name_F_Roche";
				Renard="$STR_FR2035_Name_F_Renard";
				Schmitt="$STR_FR2035_Name_F_Schmitt";
				Roy="$STR_FR2035_Name_F_Roy";
				Leroux="$STR_FR2035_Name_F_Leroux";
				Colin="$STR_FR2035_Name_F_Colin";
				Vidal="$STR_FR2035_Name_F_Vidal";
				Caron="$STR_FR2035_Name_F_Caron";
				Picard="$STR_FR2035_Name_F_Picard";
				Roger="$STR_FR2035_Name_F_Roger";
				Fabre="$STR_FR2035_Name_F_Fabre";
				Aubert="$STR_FR2035_Name_F_Aubert";
				Lemoine="$STR_FR2035_Name_F_Lemoine";
				Renaud="$STR_FR2035_Name_F_Renaud";
				Dumas="$STR_FR2035_Name_F_Dumas";
				Lacroix="$STR_FR2035_Name_F_Lacroix";
				Olivier="$STR_FR2035_Name_F_Olivier";
				Philippe="$STR_FR2035_Name_F_Philippe";
				Bourgeois="$STR_FR2035_Name_F_Bourgeois";
				Pierre="$STR_FR2035_Name_F_Pierre";
				Benoit="$STR_FR2035_Name_F_Benoit";
				Rey="$STR_FR2035_Name_F_Rey";
				Leclerc="$STR_FR2035_Name_F_Leclerc";
				Payet="$STR_FR2035_Name_F_Payet";
				Rolland="$STR_FR2035_Name_F_Rolland";
				Leclercq="$STR_FR2035_Name_F_Leclercq";
				Guillaume="$STR_FR2035_Name_F_Guillaume";
				Lecomte="$STR_FR2035_Name_F_Lecomte";
				Lopez="$STR_FR2035_Name_F_Lopez";
				Jean="$STR_FR2035_Name_F_Jean";
				Dupuy="$STR_FR2035_Name_F_Dupuy";
				Guillot="$STR_FR2035_Name_F_Guillot";
				Hubert="$STR_FR2035_Name_F_Hubert";
				Berger="$STR_FR2035_Name_F_Berger";
				Carpentier="$STR_FR2035_Name_F_Carpentier";
				Sanchez="$STR_FR2035_Name_F_Sanchez";
				Dupuis="$STR_FR2035_Name_F_Dupuis";
				Moulin="$STR_FR2035_Name_F_Moulin";
				Louis="$STR_FR2035_Name_F_Louis";
				Deschamps="$STR_FR2035_Name_F_Deschamps";
				Huet="$STR_FR2035_Name_F_Huet";
				Vasseur="$STR_FR2035_Name_F_Vasseur";
				Perez="$STR_FR2035_Name_F_Perez";
				Boucher="$STR_FR2035_Name_F_Boucher";
				Fleury="$STR_FR2035_Name_F_Fleury";
				Royer="$STR_FR2035_Name_F_Royer";
				Klein="$STR_FR2035_Name_F_Klein";
				Jacquet="$STR_FR2035_Name_F_Jacquet";
				Adam="$STR_FR2035_Name_F_Adam";
				Paris="$STR_FR2035_Name_F_Paris";
				Poirier="$STR_FR2035_Name_F_Poirier";
				Marty="$STR_FR2035_Name_F_Marty";
				Aubry="$STR_FR2035_Name_F_Aubry";
				Guyot="$STR_FR2035_Name_F_Guyot";
				Carre="$STR_FR2035_Name_F_Carre";
				Charles="$STR_FR2035_Name_F_Charles";
				Renault="$STR_FR2035_Name_F_Renault";
				Charpentier="$STR_FR2035_Name_F_Charpentier";
				Menard="$STR_FR2035_Name_F_Menard";
				Maillard="$STR_FR2035_Name_F_Maillard";
				Baron="$STR_FR2035_Name_F_Baron";
				Bertin="$STR_FR2035_Name_F_Bertin";
				Bailly="$STR_FR2035_Name_F_Bailly";
				Herve="$STR_FR2035_Name_F_Herve";
				Schneider="$STR_FR2035_Name_F_Schneider";
				Fernandez="$STR_FR2035_Name_F_Fernandez";
				Le_Gall="$STR_FR2035_Name_F_Le_Gall";
				Collet="$STR_FR2035_Name_F_Collet";
				Leger="$STR_FR2035_Name_F_Leger";
				Bouvier="$STR_FR2035_Name_F_Bouvier";
				Julien="$STR_FR2035_Name_F_Julien";
				Prevost="$STR_FR2035_Name_F_Prevost";
				Millet="$STR_FR2035_Name_F_Millet";
				Perrot="$STR_FR2035_Name_F_Perrot";
				Daniel="$STR_FR2035_Name_F_Daniel";
				Le_Roux="$STR_FR2035_Name_F_Le_Roux";
				Cousin="$STR_FR2035_Name_F_Cousin";
				Germain="$STR_FR2035_Name_F_Germain";
				Breton="$STR_FR2035_Name_F_Breton";
				Besson="$STR_FR2035_Name_F_Besson";
				Langlois="$STR_FR2035_Name_F_Langlois";
				Remy="$STR_FR2035_Name_F_Remy";
				Le_Goff="$STR_FR2035_Name_F_Le_Goff";
				Pelletier="$STR_FR2035_Name_F_Pelletier";
				Leveque="$STR_FR2035_Name_F_Leveque";
				Perrier="$STR_FR2035_Name_F_Perrier";
				Leblanc="$STR_FR2035_Name_F_Leblanc";
				Barre="$STR_FR2035_Name_F_Barre";
				Lebrun="$STR_FR2035_Name_F_Lebrun";
				Marchal="$STR_FR2035_Name_F_Marchal";
				Weber="$STR_FR2035_Name_F_Weber";
				Mallet="$STR_FR2035_Name_F_Mallet";
				Hamon="$STR_FR2035_Name_F_Hamon";
				Boulanger="$STR_FR2035_Name_F_Boulanger";
				Jacob="$STR_FR2035_Name_F_Jacob";
				Monnier="$STR_FR2035_Name_F_Monnier";
				Michaud="$STR_FR2035_Name_F_Michaud";
				Rodriguez="$STR_FR2035_Name_F_Rodriguez";
				Guichard="$STR_FR2035_Name_F_Guichard";
				Gillet="$STR_FR2035_Name_F_Gillet";
				Etienne="$STR_FR2035_Name_F_Etienne";
				Grondin="$STR_FR2035_Name_F_Grondin";
				Poulain="$STR_FR2035_Name_F_Poulain";
				Tessier="$STR_FR2035_Name_F_Tessier";
				Chevallier="$STR_FR2035_Name_F_Chevallier";
				Collin="$STR_FR2035_Name_F_Collin";
				Chauvin="$STR_FR2035_Name_F_Chauvin";
				Da_Silva="$STR_FR2035_Name_F_Da_Silva";
				Bouchet="$STR_FR2035_Name_F_Bouchet";
				Gay="$STR_FR2035_Name_F_Gay";
				Lemaitre="$STR_FR2035_Name_F_Lemaitre";
				Benard="$STR_FR2035_Name_F_Benard";
				Marechal="$STR_FR2035_Name_F_Marechal";
				Humbert="$STR_FR2035_Name_F_Humbert";
				Reynaud="$STR_FR2035_Name_F_Reynaud";
				Antoine="$STR_FR2035_Name_F_Antoine";
				Hoarau="$STR_FR2035_Name_F_Hoarau";
				Perret="$STR_FR2035_Name_F_Perret";
				Barthelemy="$STR_FR2035_Name_F_Barthelemy";
				Cordier="$STR_FR2035_Name_F_Cordier";
				Pichon="$STR_FR2035_Name_F_Pichon";
				Lejeune="$STR_FR2035_Name_F_Lejeune";
				Gilbert="$STR_FR2035_Name_F_Gilbert";
				Lamy="$STR_FR2035_Name_F_Lamy";
				Delaunay="$STR_FR2035_Name_F_Delaunay";
				Pasquier="$STR_FR2035_Name_F_Pasquier";
				Carlier="$STR_FR2035_Name_F_Carlier";
				Laporte="$STR_FR2035_Name_F_Laporte";
				Benoist="$STR_FR2035_Name_F_Benoist";
			};
		};
		class FR2035Women
		{
			class FirstNames
			{
				Marie="$STR_FR2035_Name_W_Marie";
				Nathalie="$STR_FR2035_Name_W_Nathalie";
				Isabelle="$STR_FR2035_Name_W_Isabelle";
				Sylvie="$STR_FR2035_Name_W_Sylvie";
				Catherine="$STR_FR2035_Name_W_Catherine";
				Laurie="$STR_FR2035_Name_W_Laurie";
				Christine="$STR_FR2035_Name_W_Christine";
				Francoise="$STR_FR2035_Name_W_Francoise";
				Valerie="$STR_FR2035_Name_W_Valerie";
				Sandrine="$STR_FR2035_Name_W_Sandrine";
				Stephanie="$STR_FR2035_Name_W_Stephanie";
				Veronique="$STR_FR2035_Name_W_Veronique";
				Sophie="$STR_FR2035_Name_W_Sophie";
				Celine="$STR_FR2035_Name_W_Celine";
				Chantal="$STR_FR2035_Name_W_Chantal";
				Patricia="$STR_FR2035_Name_W_Patricia";
				Anne="$STR_FR2035_Name_W_Anne";
				Brigitte="$STR_FR2035_Name_W_Brigitte";
				Julie="$STR_FR2035_Name_W_Julie";
				Monique="$STR_FR2035_Name_W_Monique";
				Aurelie="$STR_FR2035_Name_W_Aurelie";
				Nicole="$STR_FR2035_Name_W_Nicole";
				Laurence="$STR_FR2035_Name_W_Laurence";
				Annie="$STR_FR2035_Name_W_Annie";
				Emilie="$STR_FR2035_Name_W_Emilie";
				Dominique="$STR_FR2035_Name_W_Dominique";
				Virginie="$STR_FR2035_Name_W_Virginie";
				Corinne="$STR_FR2035_Name_W_Corinne";
				Elodie="$STR_FR2035_Name_W_Elodie";
				Christelle="$STR_FR2035_Name_W_Christelle";
				Camille="$STR_FR2035_Name_W_Camille";
				Caroline="$STR_FR2035_Name_W_Caroline";
				Lea="$STR_FR2035_Name_W_Lea";
				Sarah="$STR_FR2035_Name_W_Sarah";
				Florence="$STR_FR2035_Name_W_Florence";
				Laetitia="$STR_FR2035_Name_W_Laetitia";
				Audrey="$STR_FR2035_Name_W_Audrey";
				Helene="$STR_FR2035_Name_W_Helene";
				Laura="$STR_FR2035_Name_W_Laura";
				Manon="$STR_FR2035_Name_W_Manon";
				Michele="$STR_FR2035_Name_W_Michele";
				Cecile="$STR_FR2035_Name_W_Cecile";
				Christiane="$STR_FR2035_Name_W_Christiane";
				Beatrice="$STR_FR2035_Name_W_Beatrice";
				Claire="$STR_FR2035_Name_W_Claire";
				Nadine="$STR_FR2035_Name_W_Nadine";
				Delphine="$STR_FR2035_Name_W_Delphine";
				Pauline="$STR_FR2035_Name_W_Pauline";
				Karine="$STR_FR2035_Name_W_Karine";
				Melanie="$STR_FR2035_Name_W_Melanie";
				Marion="$STR_FR2035_Name_W_Marion";
				Chloe="$STR_FR2035_Name_W_Chloe";
				Jacqueline="$STR_FR2035_Name_W_Jacqueline";
				Elisabeth="$STR_FR2035_Name_W_Elisabeth";
				Evelyne="$STR_FR2035_Name_W_Evelyne";
				Marine="$STR_FR2035_Name_W_Marine";
				Claudine="$STR_FR2035_Name_W_Claudine";
				Anais="$STR_FR2035_Name_W_Anais";
				Lucie="$STR_FR2035_Name_W_Lucie";
				Danielle="$STR_FR2035_Name_W_Danielle";
				Carole="$STR_FR2035_Name_W_Carole";
				Fabienne="$STR_FR2035_Name_W_Fabienne";
				Mathilde="$STR_FR2035_Name_W_Mathilde";
				Sandra="$STR_FR2035_Name_W_Sandra";
				Pascale="$STR_FR2035_Name_W_Pascale";
				Annick="$STR_FR2035_Name_W_Annick";
				Charlotte="$STR_FR2035_Name_W_Charlotte";
				Emma="$STR_FR2035_Name_W_Emma";
				Severine="$STR_FR2035_Name_W_Severine";
				Sabrina="$STR_FR2035_Name_W_Sabrina";
				Amandine="$STR_FR2035_Name_W_Amandine";
				Myriam="$STR_FR2035_Name_W_Myriam";
				Jocelyne="$STR_FR2035_Name_W_Jocelyne";
				Alexandra="$STR_FR2035_Name_W_Alexandra";
				Angelique="$STR_FR2035_Name_W_Angelique";
				Josiane="$STR_FR2035_Name_W_Josiane";
				Joelle="$STR_FR2035_Name_W_Joelle";
				Agnes="$STR_FR2035_Name_W_Agnes";
				Mireille="$STR_FR2035_Name_W_Mireille";
				Vanessa="$STR_FR2035_Name_W_Vanessa";
				Justine="$STR_FR2035_Name_W_Justine";
				Sonia="$STR_FR2035_Name_W_Sonia";
				Bernadette="$STR_FR2035_Name_W_Bernadette";
				Emmanuelle="$STR_FR2035_Name_W_Emmanuelle";
				Oceane="$STR_FR2035_Name_W_Oceane";
				Amelie="$STR_FR2035_Name_W_Amelie";
				Clara="$STR_FR2035_Name_W_Clara";
				Maryse="$STR_FR2035_Name_W_Maryse";
				Anne_marie="$STR_FR2035_Name_W_Anne_marie";
				Fanny="$STR_FR2035_Name_W_Fanny";
				Magali="$STR_FR2035_Name_W_Magali";
				Marie_christine="$STR_FR2035_Name_W_Marie_christine";
				Morgane="$STR_FR2035_Name_W_Morgane";
				Ines="$STR_FR2035_Name_W_Ines";
				Nadia="$STR_FR2035_Name_W_Nadia";
				Muriel="$STR_FR2035_Name_W_Muriel";
				Jessica="$STR_FR2035_Name_W_Jessica";
				Laure="$STR_FR2035_Name_W_Laure";
				Genevieve="$STR_FR2035_Name_W_Genevieve";
				Estelle="$STR_FR2035_Name_W_Estelle";
			};
			class LastNames
			{
				Martin="$STR_FR2035_Name_F_Martin";
				Bernard="$STR_FR2035_Name_F_Bernard";
				Thomas="$STR_FR2035_Name_F_Thomas";
				Petit="$STR_FR2035_Name_F_Petit";
				Robert="$STR_FR2035_Name_F_Robert";
				Richard="$STR_FR2035_Name_F_Richard";
				Durand="$STR_FR2035_Name_F_Durand";
				Dubois="$STR_FR2035_Name_F_Dubois";
				Moreau="$STR_FR2035_Name_F_Moreau";
				Laurent="$STR_FR2035_Name_F_Laurent";
				Simon="$STR_FR2035_Name_F_Simon";
				Michel="$STR_FR2035_Name_F_Michel";
				Lefebvre="$STR_FR2035_Name_F_Lefebvre";
				Leroy="$STR_FR2035_Name_F_Leroy";
				Roux="$STR_FR2035_Name_F_Roux";
				David="$STR_FR2035_Name_F_David";
				Bertrand="$STR_FR2035_Name_F_Bertrand";
				Morel="$STR_FR2035_Name_F_Morel";
				Fournier="$STR_FR2035_Name_F_Fournier";
				Girard="$STR_FR2035_Name_F_Girard";
				Bonnet="$STR_FR2035_Name_F_Bonnet";
				Dupont="$STR_FR2035_Name_F_Dupont";
				Lambert="$STR_FR2035_Name_F_Lambert";
				Fontaine="$STR_FR2035_Name_F_Fontaine";
				Rousseau="$STR_FR2035_Name_F_Rousseau";
				Vincent="$STR_FR2035_Name_F_Vincent";
				Muller="$STR_FR2035_Name_F_Muller";
				Lefevre="$STR_FR2035_Name_F_Lefevre";
				Faure="$STR_FR2035_Name_F_Faure";
				Andre="$STR_FR2035_Name_F_Andre";
				Mercier="$STR_FR2035_Name_F_Mercier";
				Blanc="$STR_FR2035_Name_F_Blanc";
				Guerin="$STR_FR2035_Name_F_Guerin";
				Boyer="$STR_FR2035_Name_F_Boyer";
				Garnier="$STR_FR2035_Name_F_Garnier";
				Chevalier="$STR_FR2035_Name_F_Chevalier";
				Francois="$STR_FR2035_Name_F_Francois";
				Legrand="$STR_FR2035_Name_F_Legrand";
				Gauthier="$STR_FR2035_Name_F_Gauthier";
				Garcia="$STR_FR2035_Name_F_Garcia";
				Perrin="$STR_FR2035_Name_F_Perrin";
				Robin="$STR_FR2035_Name_F_Robin";
				Clement="$STR_FR2035_Name_F_Clement";
				Morin="$STR_FR2035_Name_F_Morin";
				Nicolas="$STR_FR2035_Name_F_Nicolas";
				Henry="$STR_FR2035_Name_F_Henry";
				Roussel="$STR_FR2035_Name_F_Roussel";
				Mathieu="$STR_FR2035_Name_F_Mathieu";
				Gautier="$STR_FR2035_Name_F_Gautier";
				Masson="$STR_FR2035_Name_F_Masson";
				Marchand="$STR_FR2035_Name_F_Marchand";
				Duval="$STR_FR2035_Name_F_Duval";
				Denis="$STR_FR2035_Name_F_Denis";
				Dumont="$STR_FR2035_Name_F_Dumont";
				Marie="$STR_FR2035_Name_F_Marie";
				Lemaire="$STR_FR2035_Name_F_Lemaire";
				Noel="$STR_FR2035_Name_F_Noel";
				Meyer="$STR_FR2035_Name_F_Meyer";
				Dufour="$STR_FR2035_Name_F_Dufour";
				Meunier="$STR_FR2035_Name_F_Meunier";
				Brun="$STR_FR2035_Name_F_Brun";
				Blanchard="$STR_FR2035_Name_F_Blanchard";
				Giraud="$STR_FR2035_Name_F_Giraud";
				Joly="$STR_FR2035_Name_F_Joly";
				Riviere="$STR_FR2035_Name_F_Riviere";
				Lucas="$STR_FR2035_Name_F_Lucas";
				Brunet="$STR_FR2035_Name_F_Brunet";
				Gaillard="$STR_FR2035_Name_F_Gaillard";
				Barbier="$STR_FR2035_Name_F_Barbier";
				Arnaud="$STR_FR2035_Name_F_Arnaud";
				Martinez="$STR_FR2035_Name_F_Martinez";
				Gerard="$STR_FR2035_Name_F_Gerard";
				Roche="$STR_FR2035_Name_F_Roche";
				Renard="$STR_FR2035_Name_F_Renard";
				Schmitt="$STR_FR2035_Name_F_Schmitt";
				Roy="$STR_FR2035_Name_F_Roy";
				Leroux="$STR_FR2035_Name_F_Leroux";
				Colin="$STR_FR2035_Name_F_Colin";
				Vidal="$STR_FR2035_Name_F_Vidal";
				Caron="$STR_FR2035_Name_F_Caron";
				Picard="$STR_FR2035_Name_F_Picard";
				Roger="$STR_FR2035_Name_F_Roger";
				Fabre="$STR_FR2035_Name_F_Fabre";
				Aubert="$STR_FR2035_Name_F_Aubert";
				Lemoine="$STR_FR2035_Name_F_Lemoine";
				Renaud="$STR_FR2035_Name_F_Renaud";
				Dumas="$STR_FR2035_Name_F_Dumas";
				Lacroix="$STR_FR2035_Name_F_Lacroix";
				Olivier="$STR_FR2035_Name_F_Olivier";
				Philippe="$STR_FR2035_Name_F_Philippe";
				Bourgeois="$STR_FR2035_Name_F_Bourgeois";
				Pierre="$STR_FR2035_Name_F_Pierre";
				Benoit="$STR_FR2035_Name_F_Benoit";
				Rey="$STR_FR2035_Name_F_Rey";
				Leclerc="$STR_FR2035_Name_F_Leclerc";
				Payet="$STR_FR2035_Name_F_Payet";
				Rolland="$STR_FR2035_Name_F_Rolland";
				Leclercq="$STR_FR2035_Name_F_Leclercq";
				Guillaume="$STR_FR2035_Name_F_Guillaume";
				Lecomte="$STR_FR2035_Name_F_Lecomte";
				Lopez="$STR_FR2035_Name_F_Lopez";
				Jean="$STR_FR2035_Name_F_Jean";
				Dupuy="$STR_FR2035_Name_F_Dupuy";
				Guillot="$STR_FR2035_Name_F_Guillot";
				Hubert="$STR_FR2035_Name_F_Hubert";
				Berger="$STR_FR2035_Name_F_Berger";
				Carpentier="$STR_FR2035_Name_F_Carpentier";
				Sanchez="$STR_FR2035_Name_F_Sanchez";
				Dupuis="$STR_FR2035_Name_F_Dupuis";
				Moulin="$STR_FR2035_Name_F_Moulin";
				Louis="$STR_FR2035_Name_F_Louis";
				Deschamps="$STR_FR2035_Name_F_Deschamps";
				Huet="$STR_FR2035_Name_F_Huet";
				Vasseur="$STR_FR2035_Name_F_Vasseur";
				Perez="$STR_FR2035_Name_F_Perez";
				Boucher="$STR_FR2035_Name_F_Boucher";
				Fleury="$STR_FR2035_Name_F_Fleury";
				Royer="$STR_FR2035_Name_F_Royer";
				Klein="$STR_FR2035_Name_F_Klein";
				Jacquet="$STR_FR2035_Name_F_Jacquet";
				Adam="$STR_FR2035_Name_F_Adam";
				Paris="$STR_FR2035_Name_F_Paris";
				Poirier="$STR_FR2035_Name_F_Poirier";
				Marty="$STR_FR2035_Name_F_Marty";
				Aubry="$STR_FR2035_Name_F_Aubry";
				Guyot="$STR_FR2035_Name_F_Guyot";
				Carre="$STR_FR2035_Name_F_Carre";
				Charles="$STR_FR2035_Name_F_Charles";
				Renault="$STR_FR2035_Name_F_Renault";
				Charpentier="$STR_FR2035_Name_F_Charpentier";
				Menard="$STR_FR2035_Name_F_Menard";
				Maillard="$STR_FR2035_Name_F_Maillard";
				Baron="$STR_FR2035_Name_F_Baron";
				Bertin="$STR_FR2035_Name_F_Bertin";
				Bailly="$STR_FR2035_Name_F_Bailly";
				Herve="$STR_FR2035_Name_F_Herve";
				Schneider="$STR_FR2035_Name_F_Schneider";
				Fernandez="$STR_FR2035_Name_F_Fernandez";
				Le_Gall="$STR_FR2035_Name_F_Le_Gall";
				Collet="$STR_FR2035_Name_F_Collet";
				Leger="$STR_FR2035_Name_F_Leger";
				Bouvier="$STR_FR2035_Name_F_Bouvier";
				Julien="$STR_FR2035_Name_F_Julien";
				Prevost="$STR_FR2035_Name_F_Prevost";
				Millet="$STR_FR2035_Name_F_Millet";
				Perrot="$STR_FR2035_Name_F_Perrot";
				Daniel="$STR_FR2035_Name_F_Daniel";
				Le_Roux="$STR_FR2035_Name_F_Le_Roux";
				Cousin="$STR_FR2035_Name_F_Cousin";
				Germain="$STR_FR2035_Name_F_Germain";
				Breton="$STR_FR2035_Name_F_Breton";
				Besson="$STR_FR2035_Name_F_Besson";
				Langlois="$STR_FR2035_Name_F_Langlois";
				Remy="$STR_FR2035_Name_F_Remy";
				Le_Goff="$STR_FR2035_Name_F_Le_Goff";
				Pelletier="$STR_FR2035_Name_F_Pelletier";
				Leveque="$STR_FR2035_Name_F_Leveque";
				Perrier="$STR_FR2035_Name_F_Perrier";
				Leblanc="$STR_FR2035_Name_F_Leblanc";
				Barre="$STR_FR2035_Name_F_Barre";
				Lebrun="$STR_FR2035_Name_F_Lebrun";
				Marchal="$STR_FR2035_Name_F_Marchal";
				Weber="$STR_FR2035_Name_F_Weber";
				Mallet="$STR_FR2035_Name_F_Mallet";
				Hamon="$STR_FR2035_Name_F_Hamon";
				Boulanger="$STR_FR2035_Name_F_Boulanger";
				Jacob="$STR_FR2035_Name_F_Jacob";
				Monnier="$STR_FR2035_Name_F_Monnier";
				Michaud="$STR_FR2035_Name_F_Michaud";
				Rodriguez="$STR_FR2035_Name_F_Rodriguez";
				Guichard="$STR_FR2035_Name_F_Guichard";
				Gillet="$STR_FR2035_Name_F_Gillet";
				Etienne="$STR_FR2035_Name_F_Etienne";
				Grondin="$STR_FR2035_Name_F_Grondin";
				Poulain="$STR_FR2035_Name_F_Poulain";
				Tessier="$STR_FR2035_Name_F_Tessier";
				Chevallier="$STR_FR2035_Name_F_Chevallier";
				Collin="$STR_FR2035_Name_F_Collin";
				Chauvin="$STR_FR2035_Name_F_Chauvin";
				Da_Silva="$STR_FR2035_Name_F_Da_Silva";
				Bouchet="$STR_FR2035_Name_F_Bouchet";
				Gay="$STR_FR2035_Name_F_Gay";
				Lemaitre="$STR_FR2035_Name_F_Lemaitre";
				Benard="$STR_FR2035_Name_F_Benard";
				Marechal="$STR_FR2035_Name_F_Marechal";
				Humbert="$STR_FR2035_Name_F_Humbert";
				Reynaud="$STR_FR2035_Name_F_Reynaud";
				Antoine="$STR_FR2035_Name_F_Antoine";
				Hoarau="$STR_FR2035_Name_F_Hoarau";
				Perret="$STR_FR2035_Name_F_Perret";
				Barthelemy="$STR_FR2035_Name_F_Barthelemy";
				Cordier="$STR_FR2035_Name_F_Cordier";
				Pichon="$STR_FR2035_Name_F_Pichon";
				Lejeune="$STR_FR2035_Name_F_Lejeune";
				Gilbert="$STR_FR2035_Name_F_Gilbert";
				Lamy="$STR_FR2035_Name_F_Lamy";
				Delaunay="$STR_FR2035_Name_F_Delaunay";
				Pasquier="$STR_FR2035_Name_F_Pasquier";
				Carlier="$STR_FR2035_Name_F_Carlier";
				Laporte="$STR_FR2035_Name_F_Laporte";
				Benoist="$STR_FR2035_Name_F_Benoist";
			};
		};
	};
};
class CfgEditorSubcategories
{
	class EdSubcat_Personnel_FR2035_CTRG
	{
		displayName="$STR_FR2035_EdSubcat_Personnel_CTRG";
	};
};
class CfgUnitInsignia
{
	class FR2035_Insignia_France
	{
		displayName="$STR_FR2035_Insignia_France";
		texture="\fr2035_data_f\insignia\france_ca.paa";
		author="$STR_FR2035_Author";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
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
			name="$STR_FR2035_Faction_fr";
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
						vehicle="FR2035_Soldier_SL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_Soldier_F";
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
						vehicle="FR2035_Soldier_TL_F";
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
						vehicle="FR2035_Soldier_A_F";
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
						vehicle="FR2035_Soldier_SL_F";
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
						vehicle="FR2035_Soldier_GL_F";
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
						vehicle="FR2035_Soldier_A_F";
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
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_Soldier_GL_F";
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
				class FR2035_InfTeam_Light
				{
					name="$STR_A3_cfggroups_fireteamlight";
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
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_LAT2_F";
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
						vehicle="FR2035_Soldier_GL_F";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_Soldier_F";
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
						vehicle="FR2035_recon_LAT_F";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_recon_JTAC_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_recon_exp_F";
						rank="PRIVATE";
						position[]={15,-15,0};
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
				class FR2035_InfAssault
				{
					name="$STR_A3_cfgGroups_West_BLU_F_Infantry_BUS_InfAssault0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_Soldier_SL_F";
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
						vehicle="FR2035_HeavyGunner_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_AAR_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_soldier_M_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_Sharpshooter_F";
						rank="CORPORAL";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_soldier_LAT_F";
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
				class FR2035_ReconSquad
				{
					name="$STR_A3_cfgGroups_West_BLU_F_Infantry_BUS_ReconSquad0";
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
					class Unit4
					{
						side=1;
						vehicle="FR2035_recon_LAT_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_recon_JTAC_F";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_recon_exp_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="FR2035_Recon_Sharpshooter_F";
						rank="CORPORAL";
						position[]={20,-20,0};
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
						position[]={0,-10,0};
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
						vehicle="FR2035_SDV_01_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_SDV_01_F";
						rank="PRIVATE";
						position[]={0,-10,0};
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
						vehicle="FR2035_Soldier_TL_F";
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
						vehicle="B_UAV_01_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
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
						vehicle="FR2035_Soldier_TL_F";
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
						position[]={-5,-5,0};
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
						vehicle="FR2035_Soldier_TL_F";
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
						position[]={-5,-5,0};
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
						vehicle="FR2035_Soldier_TL_F";
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
						vehicle="B_UAV_02_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
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
						vehicle="FR2035_Soldier_TL_F";
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
						vehicle="B_UAV_02_CAS_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
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
						vehicle="FR2035_Soldier_TL_F";
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
						vehicle="FR2035_Soldier_TL_F";
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
						vehicle="FR2035_Soldier_TL_F";
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
						vehicle="FR2035_engineer_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
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
						vehicle="FR2035_Soldier_TL_F";
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
						vehicle="FR2035_Soldier_TL_F";
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
						vehicle="FR2035_Soldier_TL_F";
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
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_LAT_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
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
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_AT_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_AAT_F";
						rank="PRIVATE";
						position[]={0,-10,0};
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
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_AA_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_AAA_F";
						rank="PRIVATE";
						position[]={0,-10,0};
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
						vehicle="FR2035_Soldier_TL_F";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_support_MG_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_support_AMG_F";
						rank="PRIVATE";
						position[]={0,-10,0};
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
						vehicle="FR2035_Soldier_TL_F";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_support_GMG_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_support_AMG_F";
						rank="PRIVATE";
						position[]={0,-10,0};
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
						vehicle="FR2035_Soldier_TL_F";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_support_Mort_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_support_AMort_F";
						rank="PRIVATE";
						position[]={0,-10,0};
					};
				};
				class FR2035_MotInf_Reinforce
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_Truck_01_transport_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_Soldier_SL_F";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_Soldier_F";
						rank="PRIVATE";
						position[]={5,-2,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_LAT_F";
						rank="CORPORAL";
						position[]={5,-4,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_soldier_M_F";
						rank="PRIVATE";
						position[]={5,-6,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_Soldier_TL_F";
						rank="SERGEANT";
						position[]={5,-8,0};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-10,0};
					};
					class Unit7
					{
						side=1;
						vehicle="FR2035_Soldier_A_F";
						rank="PRIVATE";
						position[]={5,-12,0};
					};
					class Unit8
					{
						side=1;
						vehicle="FR2035_medic_F";
						rank="PRIVATE";
						position[]={5,-14,0};
					};
					class Unit9
					{
						side=1;
						vehicle="FR2035_Soldier_SL_F";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit10
					{
						side=1;
						vehicle="FR2035_Soldier_F";
						rank="PRIVATE";
						position[]={-5,-2,0};
					};
					class Unit11
					{
						side=1;
						vehicle="FR2035_soldier_LAT_F";
						rank="CORPORAL";
						position[]={-5,-4,0};
					};
					class Unit12
					{
						side=1;
						vehicle="FR2035_soldier_M_F";
						rank="PRIVATE";
						position[]={-5,-6,0};
					};
					class Unit13
					{
						side=1;
						vehicle="FR2035_Soldier_TL_F";
						rank="SERGEANT";
						position[]={-5,-8,0};
					};
					class Unit14
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={-5,-10,0};
					};
					class Unit15
					{
						side=1;
						vehicle="FR2035_Soldier_A_F";
						rank="PRIVATE";
						position[]={-5,-12,0};
					};
					class Unit16
					{
						side=1;
						vehicle="FR2035_medic_F";
						rank="PRIVATE";
						position[]={-5,-14,0};
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
						vehicle="FR2035_Soldier_SL_F";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_Soldier_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_LAT_F";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_soldier_M_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_Soldier_TL_F";
						rank="SERGEANT";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="FR2035_Soldier_A_F";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
					class Unit8
					{
						side=1;
						vehicle="FR2035_medic_F";
						rank="PRIVATE";
						position[]={-20,-20,0};
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
						vehicle="FR2035_Soldier_SL_F";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_AT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_soldier_AT_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_soldier_AT_F";
						rank="SERGEANT";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_soldier_AAT_F";
						rank="CORPORAL";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="FR2035_soldier_AAT_F";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
					class Unit8
					{
						side=1;
						vehicle="FR2035_soldier_AAT_F";
						rank="PRIVATE";
						position[]={-20,-20,0};
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
						vehicle="FR2035_Soldier_SL_F";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_AA_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_soldier_AA_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_soldier_AA_F";
						rank="SERGEANT";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_soldier_AAA_F";
						rank="CORPORAL";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="FR2035_soldier_AAA_F";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
					class Unit8
					{
						side=1;
						vehicle="FR2035_soldier_AAA_F";
						rank="PRIVATE";
						position[]={-20,-20,0};
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
						vehicle="FR2035_Soldier_SL_F";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_Soldier_TL_F";
						rank="SERGEANT";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_soldier_repair_F";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_engineer_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_medic_F";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_soldier_AR_F";
						rank="CORPORAL";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="FR2035_soldier_exp_F";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
					class Unit8
					{
						side=1;
						vehicle="FR2035_Soldier_A_F";
						rank="PRIVATE";
						position[]={-20,-20,0};
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
						vehicle="FR2035_MBT_03_cannon_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_MBT_03_cannon_F";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_MBT_03_cannon_F";
						rank="SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_MBT_03_cannon_F";
						rank="CORPORAL";
						position[]={20,-20,0};
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
						vehicle="FR2035_MBT_03_cannon_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_APC_Tracked_01_aa_F";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_MBT_03_cannon_F";
						rank="SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_APC_Tracked_01_aa_F";
						rank="CORPORAL";
						position[]={20,-20,0};
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
						vehicle="FR2035_MBT_03_cannon_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_MBT_03_cannon_F";
						rank="SERGEANT";
						position[]={10,-10,0};
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
						position[]={10,-10,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_MBT_01_arty_F";
						rank="SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_MBT_01_arty_F";
						rank="CORPORAL";
						position[]={20,-20,0};
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
						position[]={10,-10,0};
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
						position[]={10,-10,0};
					};
				};
			};
			class CTRG
			{
				name="$STR_A3_CfgGroups_West_CTRG_F0";
				class FR2035_CTRG_InfSquad
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_M_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_Medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_LAT_F";
						rank="SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_JTAC_F";
						rank="CORPORAL";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_Exp_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_AR_F";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class FR2035_CTRG_InfTeam
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_LAT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class FR2035_CTRG_InfSentry
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_JTAC_F";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class FR2035_CTRG_MotInf_ReconTeam
				{
					name="$STR_A3_CfgGroups_West_CTRG_F_Motorized_CTRG_MotInf_ReconTeam0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_LSV_01_unarmed_CTRG_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_M_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_Medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_AR_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_LAT_F";
						rank="SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_JTAC_F";
						rank="CORPORAL";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_Exp_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
				};
				class FR2035_CTRG_MotInf_AssaultTeam
				{
					name="$STR_A3_CfgGroups_West_CTRG_F_Motorized_CTRG_MotInf_AssaultTeam0";
					side=1;
					faction="FR2035_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="FR2035_LSV_01_armed_CTRG_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_Medic_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_M_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_AR_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="FR2035_CTRG_Soldier_LAT_F";
						rank="SERGEANT";
						position[]={-10,-10,0};
					};
				};
			};
		};
	};
};
