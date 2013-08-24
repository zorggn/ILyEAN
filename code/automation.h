/*
	Automation Interface
	ILyEAN Codebase
*/

/*
	Automation defines a container for the per-clip and per-note continous event data, linking to modifiable parameters.
*/

#ifndef AUTOMATION_H
#define AUTOMATION_H

	#include "envelope.h"

	class Automation
	{

	public:

		// Default constructor
		Automation();

		// Destructor
		~Automation();

		// If the envelope is processed or not
		bool enabled;

		// Name for the contained envelope (like pitch, volume, velocity, panning, resonance, cutoff, etc...)
		std::string name;

		// Container for per-clip envelope data (only one)
		Envelope* envelope;

		// Link to some parameter of a DSP module or the project's state vars (both volatile on the other end) like tempo
		double* parameter;
		
	};

#else
	#ifndef _MSC_VER
		#warning "AUTOMATION_H already defined!"
	#else
		#pragma message ( "AUTOMATION_H already defined!" )
	#endif
#endif