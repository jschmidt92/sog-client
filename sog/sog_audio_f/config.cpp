class CfgPatches {
	class sog_audio_f {
    addonRootClass = "sog";
    name = "sog_audio_f";
		requiredAddons[] = {"sog_core"};
		units[] = {};
		weapons[] = {};
		vehicles[] = {};
	};
};

class CfgSounds {
	sounds[] = {};

	#include <hospital\class01\exam\Sounds.h>
	#include <hospital\class01\lecture\Sounds.h>
	#include <hospital\class01\opening\Sounds.h>
	#include <hospital\class01\warning\Sounds.h>
	#include <hospital\dialogue\Sounds.h>
	#include <hospital\responses\Sounds.h>

	#include <submarine\Sounds.h>
};

class CfgSFX {
	class SOGSubmarineDrainingSFX {
		sounds[] = {"sound0"};
		sound0[] = {"/sog/sog_audio_f/submarine/sounds/SOGSubmarineDraining.ogg", db10, 1, 400, 1, 0, 0, 0};
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
	};

	class SOGSubmarineExteriorAmbienceSFX {
		sounds[] = {"sound0"};
		sound0[] = {"/sog/sog_audio_f/submarine/sounds/SOGSubmarineExteriorAmbience.ogg", db10, 1, 400, 1, 0, 0, 0};
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
	};

	class SOGSubmarineFloodingSFX {
		sounds[] = {"sound0"};
		sound0[] = {"/sog/sog_audio_f/submarine/sounds/SOGSubmarineFlooding.ogg", db10, 1, 400, 1, 0, 0, 0};
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
	};

	class SOGSubmarineFloodSirenSFX {
		sounds[] = {"sound0"};
		sound0[] = {"/sog/sog_audio_f/submarine/sounds/SOGSubmarineFloodSiren.ogg", db10, 1, 400, 1, 0, 0, 0};
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
	};

	class SOGSubmarineHatchSFX {
		sounds[] = {"sound0"};
		sound0[] = {"/sog/sog_audio_f/submarine/sounds/SOGSubmarineHatch.ogg", db10, 1, 400, 1, 0, 0, 0};
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
	};

	class SOGSubmarineInteriorAmbienceSFX {
		sounds[] = {"sound0"};
		sound0[] = {"/sog/sog_audio_f/submarine/sounds/SOGSubmarineInteriorAmbience.ogg", db10, 1, 400, 1, 0, 0, 0};
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
	};

	class SOGSubmarineLockoutDoorSFX {
		sounds[] = {"sound0"};
		sound0[] = {"/sog/sog_audio_f/submarine/sounds/SOGSubmarineLockoutDoor.ogg", db10, 1, 400, 1, 0, 0, 0};
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
	};

	class SOGSubmarineEnterExteriorSFX {
		sounds[] = {"sound0"};
		sound0[] = {"/sog/sog_audio_f/submarine/sounds/SOGSubmarineEnterExterior.ogg", db10, 1, 400, 1, 0, 0, 0};
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
	};

	class SOGSubmarineValveSFX {
		sounds[] = {"sound0"};
		sound0[] = {"/sog/sog_audio_f/submarine/sounds/SOGSubmarineValve.ogg", db10, 1, 400, 1, 0, 0, 0};
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
	};
};

class CfgSentences {
	class Class01 {
		class Lecture01 {
			file = "/sog/sog_audio_f/hospital/class01/lecture/Lecture01.bikb";
			#include <hospital\class01\lecture\Lecture01.bikb>
		};
	};
	class Dialogues {
		class Dialogue01 {
			file = "/sog/sog_audio_f/hospital/dialogue/Dialogue01.bikb";
			#include <hospital\dialogue\Dialogue01.bikb>
		};
		class Dialogue02 {
			file = "/sog/sog_audio_f/hospital/dialogue/Dialogue02.bikb";
			#include <hospital\dialogue\Dialogue02.bikb>
		};
		class Dialogue03 {
			file = "/sog/sog_audio_f/hospital/dialogue/Dialogue03.bikb";
			#include <hospital\dialogue\Dialogue03.bikb>
		};
		class Dialogue04 {
			file = "/sog/sog_audio_f/hospital/dialogue/Dialogue04.bikb";
			#include <hospital\dialogue\Dialogue04.bikb>
		};
		class Dialogue05 {
			file = "/sog/sog_audio_f/hospital/dialogue/Dialogue05.bikb";
			#include <hospital\dialogue\Dialogue05.bikb>
		};
		class Dialogue06 {
			file = "/sog/sog_audio_f/hospital/dialogue/Dialogue06.bikb";
			#include <hospital\dialogue\Dialogue06.bikb>
		};
		class Dialogue07 {
			file = "/sog/sog_audio_f/hospital/dialogue/Dialogue07.bikb";
			#include <hospital\dialogue\Dialogue07.bikb>
		};
		class Dialogue08 {
			file = "/sog/sog_audio_f/hospital/dialogue/Dialogue08.bikb";
			#include <hospital\dialogue\Dialogue08.bikb>
		};
		class Dialogue09 {
			file = "/sog/sog_audio_f/hospital/dialogue/Dialogue09.bikb";
			#include <hospital\dialogue\Dialogue09.bikb>
		};
	};
};

class CfgVehicles {
	class All;
	class Sound : All {
		author = "SOG";
		mapSize = 1;
		_generalMacro = "Sound";
		scope = 0;
		side = -1;
		animated = 0;
		vehicleClass = "Sounds";
		icon = "iconSound";
		faction = "none";
		editorCategory = "sog";
		editorSubcategory = "sog_audio";
	};

	class SOGSubmarineDraining : Sound {
		scope = 2;
		sound = "SOGSubmarineDrainingSFX";
		displayName = "SOG Submarine Draining SFX";
	};

	class SOGSubmarineExteriorAmbience : Sound {
		scope = 2;
		sound = "SOGSubmarineExteriorAmbienceSFX";
		displayName = "SOG Submarine Exterior Ambience SFX";
	};

	class SOGSubmarineFlooding : Sound {
		scope = 2;
		sound = "SOGSubmarineFloodingSFX";
		displayName = "SOG Submarine Flooding SFX";
	};

	class SOGSubmarineFloodSiren : Sound {
		scope = 2;
		sound = "SOGSubmarineFloodSirenSFX";
		displayName = "SOG Submarine Flood Siren SFX";
	};

	class SOGSubmarineHatch : Sound {
		scope = 2;
		sound = "SOGSubmarineHatchSFX";
		displayName = "SOG Submarine Hatch SFX";
	};

	class SOGSubmarineInteriorAmbience : Sound {
		scope = 2;
		sound = "SOGSubmarineInteriorAmbienceSFX";
		displayName = "SOG Submarine Interior Ambience SFX";
	};

	class SOGSubmarineLockoutDoor : Sound {
		scope = 2;
		sound = "SOGSubmarineLockoutDoorSFX";
		displayName = "SOG Submarine Lockout Door SFX";
	};

	class SOGSubmarineEnterExterior : Sound {
		scope = 2;
		sound = "SOGSubmarineEnterExteriorSFX";
		displayName = "SOG Submarine Enter Exterior SFX";
	};

	class SOGSubmarineValve : Sound {
		scope = 2;
		sound = "SOGSubmarineValveSFX";
		displayName = "SOG Submarine Valve SFX";
	};
};