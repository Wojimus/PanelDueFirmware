/*
 * Strings.hpp
 *
 *  Created on: 27 Feb 2017
 *      Author: David
 *
 * The encoding used for this file must be UTF-8 to ensure that accented characters are displayed correctly.
 */

#ifndef SRC_STRINGS_HPP_
#define SRC_STRINGS_HPP_

#include "ecv.h"
#include "UserInterfaceConstants.hpp"

#define CSTRING const char * const array
#define Newline			"\n"
#define DegreeSymbol	"\u00B0"

// The font characters from 0x0100 to 0x180 are ot correct in the font for the 4.3" panel, so only include Czech on the larger panels
constexpr unsigned int NumLanguages =
#if DISPLAY_X == 800
		5
#else
		4
#endif
		;

struct StringTable
{
	// Language name
	CSTRING languageName;

	// Main page strings
	CSTRING control;
	CSTRING print;
	CSTRING console;
	CSTRING setup;
	CSTRING current;
	CSTRING active;
	CSTRING standby;
	CSTRING move;
	CSTRING extrusion;
	CSTRING macro;
	CSTRING stop;

	// Print page
	CSTRING extruderPercent;
	CSTRING speed;
	CSTRING fan;
	CSTRING timeRemaining;
	CSTRING file;
	CSTRING filament;
	CSTRING layer;
	CSTRING notAvailable;
	CSTRING pause;
	CSTRING babystep;
	CSTRING resume;
	CSTRING cancel;
	CSTRING set;

	// Setup page
	CSTRING volume;
	CSTRING calibrateTouch;
	CSTRING mirrorDisplay;
	CSTRING invertDisplay;
	CSTRING theme;
	CSTRING brightnessDown;
	CSTRING brightnessUp;
	CSTRING saveSettings;
	CSTRING clearSettings;
	CSTRING saveAndRestart;

	// Misc
	CSTRING confirmFactoryReset;
	CSTRING confirmFileDelete;
	CSTRING areYouSure;
	CSTRING touchTheSpot;
	CSTRING moveHead;
	CSTRING extrusionAmount;
	CSTRING extrusionSpeed;
	CSTRING extrude;
	CSTRING retract;
	CSTRING babyStepping;
	CSTRING currentZoffset;
	CSTRING message;
	CSTRING messages;
	CSTRING firmwareVersion;
	CSTRING response;

	// File popup
	CSTRING filesOnCard;
	CSTRING macros;
	CSTRING error;
	CSTRING accessingSdCard;
	CSTRING fileName;
	CSTRING fileSize;
	CSTRING layerHeight;
	CSTRING objectHeight;
	CSTRING filamentNeeded;
	CSTRING generatedBy;
	CSTRING lastModified;
	CSTRING estimatedPrintTime;
	CSTRING simulatedPrintTime;
	CSTRING simulate;

	// Printer status strings
	CSTRING statusValues[13];

	// Colour theme names
	CSTRING colourSchemeNames[NumColourSchemes];

	// Display dimmer types
	CSTRING displayDimmingNames[(unsigned int)DisplayDimmerType::NumTypes];
};

const StringTable LanguageTables[NumLanguages] =
{
	// English
	{
		// Language name
		"English",

		// Main page strings
		"Control",
		"Print",
		"Console",
		"Setup",
		"Current" THIN_SPACE DEGREE_SYMBOL "C",
		"Active" THIN_SPACE DEGREE_SYMBOL "C",
		"Standby" THIN_SPACE DEGREE_SYMBOL "C",
		"Move",
		"Extrusion",
		"Macro",
		"STOP",

		// Print page
		"Extruder" THIN_SPACE "%",
		"Speed ",							// note space at end
		"Fan ",								// note space at end
		"Time left: ",
		"file ",							// note space at end
		", filament ",						// note space at end
		", layer ",							// note space at end
		"n/a",
		"Pause",
		"Baby step",
		"Resume",
		"Cancel",
		"Set",

		// Setup page
		"Volume ",							// note space at end
		"Calibrate touch",
		"Mirror display",
		"Invert display",
		"Theme",
		"Brightness -",
		"Brightness +",
		"Save settings",
		"Clear settings",
		"Save & Restart",

		// Misc
		"Confirm factory reset",
		"Confirm file delete",
		"Are you sure?",
		"Touch the spot",
		"Move head",
		"Extrusion amount (mm)",
		"Speed (mm/s)",
		"Extrude",
		"Retract",
		"Baby stepping",
		"Current Z offset: ",
		"Message",
		"Messages",
		"Panel Due firmware version ",	// note space at end
		"Response",

		// File popup
		"Files on card ",				// note the space on the end
		"Macros",
		"Error ",						// note the space at the end
		" accessing SD card",			// note the space at the start
		"Filename: ",
		"Size: ",
		"Layer height: ",
		"Object height: ",
		"Filament needed: ",
		"Sliced by: ",
		"Last modified: ",
		"Estimated print time: ",
		"Simulated print time: ",
		"Simulate",

		// Printer status strings
		{
			"Connecting",
			"Idle",
			"Printing",
			"Halted",
			"Starting up",
			"Paused",
			"Busy",
			"Pausing",
			"Resuming",
			"Firmware upload",
			"Changing tool",
			"Simulating",
			"Standby"
		},

		// Theme names
		{
			"Light theme",
			"Dark theme",
			"Woj theme"
		},

		// Display dimming types
		{
			"Never dim",
			"Dim if idle",
			"Always dim"
		}
 	},

	// German
	{
		// Language name
		"Deutsch",

		// Main page strings
		"Steuerung",
		"Druck",
		"Konsole",
		"Setup",
		"Istwert" THIN_SPACE DEGREE_SYMBOL "C",
		"Aktiv" THIN_SPACE DEGREE_SYMBOL "C",
		"Standby" THIN_SPACE DEGREE_SYMBOL "C",
		"Bewegung",
		"Extrusion",
		"Makro",
		"STOP",

		// Print page
		"Extruder" THIN_SPACE "%",
		"Tempo ",							// note space at end. Was "Geschwindigkeit " but that is too long to fit in the space available.
		"LÃ¼fter ",							// note space at end
		"Restzeit: ",
		"Datei ",							// note space at end
		", Filament ",						// note space at end
		", Layer ",							// note space at end. "Schicht" is too long.
		"n/v",
		"Pause",
		"Einzelschritt",
		"Fortsetzen",
		"Abbrechen",
		"Set",

		// Setup page
		"LautstÃ¤rke ",						// note space at end
		"Touch kalibrieren",
		"Anzeige spiegeln",
		"Anzeige umkehren",
		"Darstellung",
		"Beleuchtung  -",
		"Beleuchtung  +",
		"Einstllgen sichern",
		"Werks-Reset",
		"Sichern & Reboot",

		// Misc
		"Alle Einstellungen zurÃ¼cksetzen",
		"Die Datei wird gelÃ¶scht",
		"Sind sie sicher?",
		"Bitte auf den Punkt tippen",
		"Kopf bewegen",
		"Extrusionsmenge (mm)",
		"Geschwindigkeit (mm/s)",
		"Extrudieren",
		"ZurÃ¼ckziehen",
		"Einzelschritte",
		"Aktueller Z-Versatz: ",
		"Nachricht",
		"Nachrichten",
		"Panel Due Firmwareversion ",	// note space at end
		"Antwort",

		// File popup
		"Dateien auf Karte ",			// note the space on the end
		"Makros",
		"Fehler ",						// note the space at the end
		" beim Zugriff auf SD-Karte",	// note the space at the start
		"Dateiname: ",
		"GrÃ¶ÃŸe: ",
		"SchichthÃ¶he: ",
		"ObjekthÃ¶he: ",
		"BenÃ¶tigtes Filament: ",
		"Erzeugt mit: ",
		"Letzte Ã„nderung: ",
		"GeschÃ¤tzte Druckdauer: ",
		"Errechnete Druckdauer: ",
		"Simulieren",

		// Printer status strings
		{
			"Verbinde",
			"Leerlauf",
			"Druckt",
			"Angehalten",
			"Starte",
			"Pausiert",
			"BeschÃ¤ftigt",
			"Pausiere",
			"Fortsetzen",
			"Firmware-Upload",
			"Wechsle Tool",
			"Simuliert",
			"Stand-by"
		},

		// Theme names
		{
			"Anzeige hell",
			"Anzeige invertiert"
		},

		// Display dimming types
		{
			"Dimmen aus",
			"Dim bei idle",				//shortened due to space limitations, ideally "Nur im Standby dimmen"
			"Dimmen ein"
		}
	},

	// French
	{
		// Language name
		"FranÃ§ais",

		// Main page strings
		"ContrÃ´le",
		"Imprimer",
		"Console",
		"Installation",
		"Actuel" THIN_SPACE DEGREE_SYMBOL "C",
		"Actif" THIN_SPACE DEGREE_SYMBOL "C",
		"Standby" THIN_SPACE DEGREE_SYMBOL "C",
		"Mouvement",
		"Extrusion",
		"Macro",
		"ARRÃŠT",

		// Print page
		"Extrudeuse" THIN_SPACE "%",
		"Vitesse ",								// note space at end
		"Ventilateur ",							// note space at end
		"Temps Restant: ",
		"Fichier ",								// note space at end
		", filament ",							// note space at end
		", couche ",							// note space at end
		"n/a",
		"Pause",
		"Baby step",
		"Reprise",
		"Annuler",
		"Set",

		// Setup page
		"Volume ",								// note space at end
		"Calibrer touch",
		"Affichage en nÃ©gatif",
		"Inverser affichage",
		"ThÃ©me",
		"LuminositÃ© -",
		"LuminositÃ© +",
		"Sauver paramÃªtres",
		"Effacer paramÃªtres",
		"Sauvegarde & RedÃ©marrage",

		// Misc
		"Confirmer le rÃ©initialisation de l'imprimante",
		"Confirm suppression fichier",
		"Vous Ãªtes sÃ»re?",
		"Appuyer sur le point",
		"Mouvement de la  tÃªte",
		"QuantitÃ© de MatiÃ©re extrudÃ©e (mm)",
		"Vitesse (mm/s)",
		"Extruder",
		"Retracter",
		"Baby stepping",
		"dÃ©calage Z courant : ",
		"Message",
		"Messages",
		"Version du firmware du Panel Due ",	// note space at end
		"RÃ©ponse",

		// File popup
		"Fichier sur carte ",					// note the space on the end
		"Macros",
		"Erreur ",								// note the space at the end
		" accÃ©s SD card en cours",				// note the space at the start
		"Nom du fichier : ",
		"Taille : ",
		"Hauteur de couche: ",
		"Hauteur de l'objet: ",
		"Filament requis: ",
		"Sliced par: ",
		"DerniÃ¨re modification: ",
		"Temps d'impression estimÃ©: ",
		"Temps d'impression simulÃ©: ",
		"Simuler",

		// Printer status strings
		{
			"Connection en cours",
			"Au repos",
			"Impression",
			"ArrÃªt",
			"DÃ©marrage",
			"Pause",
			"OccupÃ©"
			"Pause",
			"Reprise",
			"TÃ©leverser le firmware",
			"Changement d'outil",
			"Simuler",
			"En veille"
		},

		// Theme names
		{
			"Fond Blanc",
			"Fond Noir"
		},

		// Display dimming types
		{
			"Jamais Dim",
			"Idle Dim",
			"Toujours Dim"
		}
	},

	// Spanish
	{
		// Language name
		"EspaÃ±ol",

		// Main page strings
		"Control",
		"Imprimir",
		"Consola",
		"ConfiguraciÃ³n",
		"Actual" THIN_SPACE DEGREE_SYMBOL "C",
		"Activo" THIN_SPACE DEGREE_SYMBOL "C",
		"Esperando" THIN_SPACE DEGREE_SYMBOL "C",
		"Mover",
		"ExtrusiÃ³n",
		"Macro",
		"PARADA",							// It could also be STOP, both are OK

		// Print page
		"Extrusor" THIN_SPACE "%",
		"Veloc. ",							// note space at end. "Velocidad" is too long.
		"Ventil. ",							// note space at end. "Ventilador" is too lonh.
		"Tiempo restante: ",
		"archivo ",							// note space at end
		", filamento ",						// note space at end
		", capa ",							// note space at end
		"n/d",								// Not available / no disponible
		"Pausa",
		"Micro paso",						// Literal translation of baby step it's very odd in spanish...
		"Resumir",
		"Cancelar",
		"Fijar",							// "Establecer" would be more correct, but it's longer.

		// Setup page
		"Volumen ",							// note space at end
		"Calibrar toque",					// this one is tricky because "touch" is very known in regard to screens...
		"Espejar pantalla",
		"Invertir pantalla",
		"Tema",
		"Brillo -",
		"Brillo +",
		"Guardar parÃ¡metros",
		"Borrar parÃ¡metros",
		"Guardar y Reiniciar",

		// Misc
		"Confirma restablecimiento de fÃ¡brica",
		"Confirma borrar archivo",
		"EstÃ¡ seguro?",
		"Tocar el punto",
		"Mover cabezal",
		"Cantidad de extrusiÃ³n (mm)",
		"Velocidad (mm/s)",
		"Extruir",
		"Retraer",
		"Micro paso",
		"SeparaciÃ³n actual de Z: ",
		"Mensaje",
		"Mensajes",
		"Panel Due versiÃ³n de firmware ",	// note space at end
		"Respuesta",

		// File popup
		"Archivos en la tarjeta ",			// note the space on the end
		"Macros",
		"Error ",							// note the space at the end
		" accediendo a la tarjeta SD",		// note the space at the start
		"Nombre de archivo: ",
		"TamaÃ±o: ",
		"Altura de capa: ",
		"Altura de objeto: ",
		"Filamento necesario: ",
		"Procesado por: ",					// there is no translation in spanish for this meaning, so I proposed to use "processed by" which is understandable
		"Ãšltima modificaciÃ³n: ",
		"Tiempo estimado de impresiÃ³n: ",
		"Tiempo de impresiÃ³n simulado: ",
		"Simular",

		// Printer status strings
		{
			"conexiÃ³n",
			"en espera",					// it's more frequently use "en espera" than "ocioso", it makes more sense for a machine
			"imprimiendo",
			"detuvo",
			"empezando",
			"pausado",
			"ocupado",
			"pausando",
			"reanudando",
			"carga del firmware",
			"herramienta de cambio",
			"simulando",
			"en espera"
		},

		// Theme names
		{
			"Claro",
			"Oscuro"
		},

		// Display dimming types
		{
			"Nunca Atenuar",
			"Atenuar en espera",
			"Siempre Atenuar",
		},
	},

#if DISPLAY_X == 800
	// Czech
	{
		// Language name
		"ÄŒeÅ¡tina",

		// Main page strings
		"OvlÃ¡dÃ¡nÃ­",
		"Tisk",
		"Konzole",
		"NastavenÃ­",
		"AktuÃ¡lnÃ­" THIN_SPACE DEGREE_SYMBOL "C",
		"AktivnÃ­" THIN_SPACE DEGREE_SYMBOL "C",
		"NeÄ�innÃ¡" THIN_SPACE DEGREE_SYMBOL "C",
		"Pohyb",
		"Extruder",
		"Makra",
		"STOP",

		// Print page
		"Extruder" THIN_SPACE "%",
		"Rychl. ",							// note space at end
		"Vent. ",							// note space at end
		"ÄŒas do konce: ",
		"soubor ",							// note space at end
		", materiÃ¡l ",						// note space at end
		", vrstva ",						// note space at end
		"n/a",
		"Pozastavit",
		"Baby step",
		"PokraÄ�ovat",
		"ZruÅ¡it",
		"OK",

		// Setup page
		"Hlasitost ",						// note space at end
		"Kalibrace dotyku",
		"Zrcadlit displej",
		"ObrÃ¡tit displej",
		"Motiv",
		"PodsvÃ­cenÃ­ -",
		"PodsvÃ­cenÃ­ +",
		"UloÅ¾it nastavenÃ­",
		"Smazat nastavenÃ­",
		"UloÅ¾it a Restart",

		// Misc
		"SkuteÄ�nÄ› obnovit tovÃ¡rnÃ­ nastavenÃ­?",
		"SkuteÄ�nÄ› smazat?",
		"UrÄ�itÄ›?",
		"DotknÄ›te se bodu",
		"Posun hlavy",
		"MnoÅ¾stvÃ­ (mm)",
		"Rychlost (mm/s)",
		"VytlaÄ�it (extr.)",
		"ZatlaÄ�it (retr.)",
		"Baby stepping",
		"AktuÃ¡lnÃ­ Z offset: ",
		"ZprÃ¡va",
		"ZprÃ¡vy",
		"Verze firmware Panel Due ",	// note space at end
		"OdpovÄ›Ä�",

		// File popup
		"Soubory na kartÄ› ",			// note the space on the end
		"Makra",
		"Chyba ",						// note the space at the end
		" pÅ™Ã­stupu ke kartÄ›",			// note the space at the start
		"NÃ¡zev: ",
		"Velikost: ",
		"VÃ½Å¡ka vrstvy: ",
		"VÃ½Å¡ka objektu: ",
		"SpotÅ™eba (mat.): ",
		"Slicer: ",
		"Last modified: ",
		"Estimated print time: ",
		"Simulated print time: ",
		"Simulace",

		// Printer status strings
		{
			"PÅ™ipojovÃ¡nÃ­",
			"NeÄ�innÃ½",
			"Tiskne",
			"Zastaven",
			"Startuje",
			"Pozastaven",
			"ZaneprÃ¡zdnÄ›nÃ½",
			"Pozastavuje se",
			"PokraÄ�uje",
			"NahrÃ¡vÃ¡ firmware",
			"VÃ½mÄ›na nÃ¡stroje",
			"Simulace",
			"PohotovostnÃ­"
		},

		// Theme names
		{
			"SvÄ›tlÃ½",
			"TmavÃ½"
		},

		// Display dimming types
		{
			"Nikdy nezmÄ›nÃ­me",
			"Idle Dim",
			"VÅ¾dy Dim"
		}
	}
#endif

};

#endif /* SRC_STRINGS_HPP_ */
