class CfgPatches
{
	class FR2035_Music_F
	{
		author="$STR_FR2035_Audio_Artist";
		name="French Army 2035 - Soundtrack";
		url="https://soundcloud.com/shigumitsu";
		requiredAddons[]=
		{
			"FR2035_Data_F"
		};
		requiredVersion=1.66;
		units[]={};
		weapons[]={};
	};
};
class CfgMusic
{
	class FR2035_LeadTrack01_F
	{
		name="FR2035 - Menu";
		sound[]=
		{
			"\fr2035_music_f\music\menu.ogg",
			1,
			1
		};
		duration=115.63;
		musicClass="Calm";
	};
};
