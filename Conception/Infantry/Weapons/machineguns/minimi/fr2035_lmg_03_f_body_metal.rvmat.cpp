class StageTI
{
	texture="a3\weapons_f_exp\machineguns\lmg_03\data\lmg_03_f_body_ti_ca.paa";
};
ambient[]={1,1,1,1};
diffuse[]={1,1,1,1};
forcedDiffuse[]={0,0,0,0};
emmisive[]={0,0,0,1};
specular[]={0.25,0.25,0.25,1};
specularPower=100;
PixelShaderID="super";
VertexShaderID="super";
class Stage1
{
	texture="fr2035_weapons_f\data\minimi\fr2035_lmg_03_f_body_nohq.paa";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage2
{
	texture="#(argb,8,8,3)color(0.5,0.5,0.5,1,DT)";
	uvSource="tex";
	class uvTransform
	{
		aside[]={16,0,0};
		up[]={0,16,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage3
{
	texture="#(argb,8,8,3)color(0,0,0,0,MC)";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage4
{
	texture="a3\weapons_f_exp\machineguns\lmg_03\data\lmg_03_f_body_as.paa";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage5
{
	texture="fr2035_weapons_f\data\minimi\fr2035_lmg_03_f_body_smdi.paa";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage6
{
	texture="#(ai,16,2,2)fresnel(0.46,0.22)";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage7
{
	texture="a3\data_f\env_land_co.paa";
	useWorldEnvMap="true";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};