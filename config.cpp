class CfgPatches
{
	class obscura
	{
		requiredAddons[] =
		{
			"DZ_Scripts",
			"DZ_Data"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgMods
{
	class obscura
	{
		dir = "obscura/obscura";
		hideName = 0;
		hidePicture = 0;
		name = "obscura";
		version = "v08.07.26";
		credits = "adelasia";
		author = "adelasia";
		extra = 0;
		type = "mod";
		dependencies[] = { "Game" };

		class defs
		{
			class imageSets
			{
				files[] =
				{
					"obscura/obscura/gui/imagesets/obscura_set.imageset"
				};
			};

			class gameScriptModule
			{
				value = "";
				files[] = { "obscura/obscura/scripts/3_Game" };
			};
		};
	};
};
