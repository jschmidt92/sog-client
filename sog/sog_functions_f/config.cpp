class CfgPatches {
	class sog_functions_f {
		addonRootClass = "sog";
    name = "sog_functions_f";
		requiredAddons[] = {"sog_core", "ace_main"};
		units[] = {};
		weapons[] = {};
		vehicles[] = {};
	};
};

class CfgFunctions {
	class sog {
		class Ambient {
			file = "\sog\sog_functions_f\ambient";
			description = "This adds various needed functions for the SOG Ambient module.";

			class ambientSound {
				file = "\sog\sog_functions_f\ambient\scripts\fn_ambientSound.sqf";
			};
		};

		class Briefing {
			file = "\sog\sog_functions_f\briefing";
			description = "This adds various needed functions for the SOG Briefing module.";

			class endSlideShow {
				file = "\sog\sog_functions_f\briefing\scripts\fn_endSlideShow.sqf";
			};
			class initSlideShow {
				file = "\sog\sog_functions_f\briefing\scripts\fn_initSlideShow.sqf";
			};
			class nextImage {
				file = "\sog\sog_functions_f\briefing\scripts\fn_nextImage.sqf";
			};
			class prevImage {
				file = "\sog\sog_functions_f\briefing\scripts\fn_prevImage.sqf";
			};
			class startSlideShow {
				file = "\sog\sog_functions_f\briefing\scripts\fn_startSlideShow.sqf";
			};
		};

		class Dialogue {
			file = "\sog\sog_functions_f\dialogue";
			description = "This adds various needed functions for the SOG Dialogue module.";

			class selectAI {
				file = "\sog\sog_functions_f\dialogue\scripts\fn_selectAI.sqf";
			};
			class selectDialogue {
				file = "\sog\sog_functions_f\dialogue\scripts\fn_selectDialogue.sqf";
			};
		};

		class Medical {
			file = "\sog\sog_functions_f\medical";
			description = "This adds various needed functions for the SOG Medical module.";

			class checkVictim {
				file = "\sog\sog_functions_f\medical\scripts\fn_checkVictim.sqf";
			};
			class deleteVictim {
				file = "\sog\sog_functions_f\medical\scripts\fn_deleteVictim.sqf";
			};
			class spawnVictim {
				file = "\sog\sog_functions_f\medical\scripts\fn_spawnVictim.sqf";
			};
		};

		class Service {
			file = "\sog\sog_functions_f\service";
			description = "This adds various needed functions for the SOG Weather module.";

			class serviceVehicle {
				file = "\sog\sog_functions_f\service\scripts\fn_serviceVehicle.sqf";
			};
		};

		class Weather {
			file = "\sog\sog_functions_f\weather";
			description = "Script is Executed From The Init.sqf or InitServer.sqf";

			class checkRain {
				file = "\sog\sog_functions_f\weather\scripts\fn_checkRain.sqf";
			};
		};
	};
};