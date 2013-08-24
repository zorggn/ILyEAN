/*
	Note Interface
	ILyEAN Codebase
*/

/*
	The note is an integral type in the arrangement hierarchy,
	it contains information about discreet sound events,
	and continuous changes to its character.
*/

#ifndef NOTE_H
#define NOTE_H

	#include "automation.h"
	#include "timebase.h"

	class Note
	{

	public:

		// Default constructor; not really used that much
		Note();

		// Copy constructor; this is used most of the time, from editor-specific default notes
		Note(const note& source);

		// Destructor
		~Note();

		// Assignment operator


		// Unique note identifier (defined as two consecutive 32bit uints for x86 systems?)
		uint64_t id;

		// Generic group identifier
		uint32_t group;

		// Temporal position
		Time position;

		// Temporal length
		Time length;

		// Base frequency
		double baseFreq;

		// Muted notes don't trigger DSP modules
		bool muted;

		// Helper for multi-editing
		bool selected;

		// Tracker-view channel identifier
		uint16_t trackerCh;

		// Scorewriter-view channel identifier
		uint8_t midiCh;

		// DSP module link
		Module* instrument;

		// Container for per-note automation data
		Automation** automation;

		// Number of per-note automation envelopes
		uint32_t automationNum;

	};

#else
	#ifndef _MSC_VER
		#warning "NOTE_H already defined!"
	#else
		#pragma message ( "NOTE_H already defined!" )
	#endif
#endif