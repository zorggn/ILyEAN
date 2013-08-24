/*
	Envelope Interface
	ILyEAN Codebase
*/

/*
	Envelopes contain continuous data for automation purposes, either per-note or per-clip.
	Note: Envelopes do NOT have links to DSP modules, those are handled by the Note, Automation and AudioClip classes.
*/

#ifndef ENVELOPE_H
#define ENVELOPE_H

	#include "node.h"

	class Envelope
	{

	public:

		// Default constructor
		Envelope();

		// Destructor
		~Envelope();
	
		// Envelope identifier (needs to be unique per-note or per-clip, nothing more)
		uint32_t id;

		// number of nodes in the envelope
		uint32_t nodeNum;

		// a collection of nodes
		Node* node;

		// getter function, should have one with a length param as well; pos is double so it may need to interpolate
		double getValAtPos(double pos);

	};

#else
	#ifndef _MSC_VER
		#warning "ENVELOPE_H already defined!"
	#else
		#pragma message ( "ENVELOPE_H already defined!" )
	#endif
#endif