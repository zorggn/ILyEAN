/*
	Clip Interface
	ILyEAN Codebase
*/

/*
	Clips are one of the hearts of the DAW; they hold automation, audio and notes at the same time (also collab freeze-d renders.)
	In the Arranger, instances of these clips are placed and manipulated to suit one's needs.
*/

#ifndef CLIP_H
#define CLIP_H

	class Clip
	{

	public:

		// Default constructor
		Clip();

		// Destructor
		~Clip();
	
		// todo: containers for notes, automation, audioclips and frozen renders, and handler functions.


	};

#else
	#ifndef _MSC_VER
		#warning "CLIP_H already defined!"
	#else
		#pragma message ( "CLIP_H already defined!" )
	#endif
#endif